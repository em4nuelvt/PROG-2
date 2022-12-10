
#include "ListaCorrenteLimite.hpp"
using namespace std;

ListaLimite::ListaLimite(){
    primeiro=NULL;
    ultimo=NULL;
}

ListaLimite::~ListaLimite(){

}

bool ListaLimite::vazia(){
    return primeiro==NULL;
}



void ListaLimite::cadastra(){

    int numero;
    string nome;
    float saldo;
    float limite;
    ListaTransacoes* transacoes=new ListaTransacoes();
    transacoes->setPrimeiro(NULL);
    transacoes->setUltimo(NULL);

    CorrenteLimite* aux= new CorrenteLimite();



    while(true){
        std::cout<<"Digite o numero da conta corrente: ";
        cin>>numero;
        if(cin.fail()){
            cout<<"Digite um número válido!"<<endl;
            cin.clear();
            setbuf(stdin,0);
            continue;
        }else{
            break;
        }
    }

    aux=primeiro;
    while(aux){
        if(aux->getNumero()==numero){
            std::cout<<"Conta ja existe."<<endl;
            return;
        }
        aux=aux->getProx();
    }
    aux=primeiro;

    std::cout<<"Digite o nome do correntista: ";
    setbuf(stdin,0);
    getline(cin,nome);

    while(true){
        std::cout<<"Digite o saldo inicial da conta: ";
        cin>>saldo;
        if(cin.fail()){
            cout<<"Digite um número válido!"<<endl;
            cin.clear();
            setbuf(stdin,0);
            continue;
        }else{
            break;
        }
    }

    while(true){
        std::cout<<"Digite o limite da conta: ";
        cin>>limite;
        if(cin.fail()){
            cout<<"Digite um número válido!"<<endl;
            cin.clear();
            setbuf(stdin,0);
            continue;
        }else{
            break;
        }
    }





    CorrenteLimite *novo= new CorrenteLimite();
    novo->setNome(nome);
    novo->setNumero(numero);
    novo->setSaldo(saldo);
    novo->setLimite(limite);

    if(vazia()){
        primeiro=novo;
        ultimo=primeiro;
        ultimo->setProx(NULL);
        std::cout<<"Cadastro realizado."<<endl;
        return;
    }
    ultimo->setProx(novo);
    ultimo=novo;
    ultimo->setProx(NULL);
    return;
}

void ListaLimite::deposito(){

    if(vazia()){
        std::cout<<"Cadastre uma conta..."<<endl;
        return;
    }
    CorrenteLimite* aux=new CorrenteLimite();
    aux=primeiro;
    int numero;
    string data;
    string descricao;
    float acm;
    float valor;
    bool existe=false;


    while(true){
        std::cout<<"Insira o numero da conta que deseja realizar o depósito: ";
        cin>>numero;
        if(cin.fail()){
            cout<<"Digite um número válido!"<<endl;
            cin.clear();
            setbuf(stdin,0);
            continue;
        }else{
            break;
        }
    }


    while(aux){
        if(numero==aux->getNumero()){
            while(true){
                cout<<"Insira o valor que deseja depositar: R$";
                cin>>acm;
                if(cin.fail()){
                    cout<<"Digite um número válido!"<<endl;
                    cin.clear();
                    setbuf(stdin,0);
                    continue;
                }else{
                    break;
                }
            }
            valor=acm;
            acm=acm+aux->getSaldo();
            aux->setSaldo(acm);
            aux->getListaTransacoes()->insere(valor);
            std::cout<<"Valor depositado!!!"<<endl<<"Saldo atual: R$"<<aux->getSaldo()<<endl;
            std::cout<<endl;
            existe=true;
            return;
        }
        aux=aux->getProx();
    }
    if(!existe){
        std::cout<<"Conta não encontrada..."<<endl<<endl;
    }
}

void ListaLimite::saque(){
    if(vazia()){
        std::cout<<"Cadastre uma conta..."<<endl;
        return;
    }
    CorrenteLimite* aux=new CorrenteLimite();
    aux=primeiro;
    int numero;
    float valor,acm;
    float decresceLimite;
    float limiteNovo;

    while(true){
        std::cout<<"Insira o numero da conta que deseja sacar: ";
        cin>>numero;
        if(cin.fail()){
            cout<<"Digite um número válido!"<<endl;
            cin.clear();
            setbuf(stdin,0);
            continue;
        }else{
            break;
        }
    }
    while(aux){
        try
        {
            if(aux->getNumero()==numero){
                while(true){
                    cout<<"Insira o valor que deseja sacar: R$";
                    cin>>valor;
                    if(cin.fail()){
                        cout<<"Digite um número válido!"<<endl;
                        cin.clear();
                        setbuf(stdin,0);
                        continue;
                    }else{
                        break;
                    }
                }

                acm=valor;
                if(valor<aux->getSaldo()){
                    acm=aux->getSaldo()-valor;
                    aux->setSaldo(acm);
                    aux->getListaTransacoes()->insere(0-valor);
                    std::cout<<"Saque realizado!!!"<<endl<<"Saldo atual: R$"<<aux->getSaldo()<<"Limite atual: R$"<<aux->getLimite()<<endl;
                }else{
                    decresceLimite=valor-aux->getSaldo();
                    if(decresceLimite<aux->getLimite()){
                        aux->setLimite(aux->getLimite()-decresceLimite);
                        aux->setSaldo(0);
                        aux->getListaTransacoes()->insere(0-valor);
                        std::cout<<"Saque realizado!!!"<<endl<<"Saldo atual: R$"<<aux->getSaldo()<<"Limite atual: R$"<<aux->getLimite()<<endl;

                    }else{
                        throw ExcecaoLimite();
                        std::cout<<"Saldo e limites estourados para esse valor..."<<endl;
                        return;
                    }
                }
                return;
            }
        }
        catch(ExcecaoLimite &e)
        {
            std::cerr << e.what() << '\n';
            return;
        }
        

        aux=aux->getProx();
    }
    std::cout<<"Conta não encontrada..."<<endl<<endl;
    return;
}

void ListaLimite::imprimeExtrato(){
    int numero;
    CorrenteLimite* aux=new CorrenteLimite();


    while(true){
        std::cout<<"Insira o numero da conta: ";
        cin>>numero;
        if(cin.fail()){
            cout<<"Digite um número válido!"<<endl;
            cin.clear();
            setbuf(stdin,0);
            continue;
        }else{
            break;
        }
    }

    aux=primeiro;

    while(aux){
        if(aux->getNumero()==numero){
            std::cout<<"Nome: "<<aux->getNome()<<endl<<"Numero da conta: "<<aux->getNumero()<<endl<<endl;
            aux->getListaTransacoes()->imprime();
            std::cout<<endl;
            std::cout<<"Saldo atual: R$"<<aux->getSaldo()<<endl;
            std::cout<<"Limite disponível: R$"<<aux->getLimite()<<endl;
            return;
        }
        aux=aux->getProx();
    }
    std::cout<<"Conta não encontrada"<<endl;
    return;

}