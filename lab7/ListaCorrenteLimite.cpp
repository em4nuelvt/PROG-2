
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

    cout<<"Digite o numero da conta corrente: ";
    cin>>numero;

    aux=primeiro;
    while(aux){
        if(aux->getNumero()==numero){
            cout<<"Conta ja existe."<<endl;
            return;
        }
        aux=aux->getProx();
    }
    aux=primeiro;

    cout<<"Digite o nome do correntista: ";
    setbuf(stdin,0);
    getline(cin,nome);

    cout<<"Digite o saldo inicial da conta: ";
    cin>>saldo;

    cout<<"Digite o limite da conta: ";
    cin>>limite;

    CorrenteLimite *novo= new CorrenteLimite();
    novo->setNome(nome);
    novo->setNumero(numero);
    novo->setSaldo(saldo);
    novo->setLimite(limite);

    if(vazia()){
        primeiro=novo;
        ultimo=primeiro;
        ultimo->setProx(NULL);
        cout<<"Cadastro realizado."<<endl;
        return;
    }
    ultimo->setProx(novo);
    ultimo=novo;
    ultimo->setProx(NULL);
    return;
}

void ListaLimite::deposito(){

    if(vazia()){
        cout<<"Cadastre uma conta..."<<endl;
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

    cout<<"Insira o numero da conta que deseja realizar o depósito: ";
    cin>>numero;

    while(aux){
        if(numero==aux->getNumero()){
            cout<<"Digite o valor que deseja depositar: R$";
            cin>>acm;
            valor=acm;
            acm=acm+aux->getSaldo();
            aux->setSaldo(acm);
            aux->getListaTransacoes()->insere(valor);
            cout<<"Valor depositado!!!"<<endl<<"Saldo atual: R$"<<aux->getSaldo()<<endl;
            cout<<endl;
            existe=true;
            return;
        }
        aux=aux->getProx();
    }
    if(!existe){
        cout<<"Conta não encontrada..."<<endl<<endl;
    }
}

void ListaLimite::saque(){
    if(vazia()){
        cout<<"Cadastre uma conta..."<<endl;
        return;
    }
    CorrenteLimite* aux=new CorrenteLimite();
    aux=primeiro;
    int numero;
    float valor,acm;
    float decresceLimite;
    float limiteNovo;

    cout<<"Insira o numero da conta que deseja sacar: ";
    cin>>numero;

    while(aux){
        if(aux->getNumero()==numero){
            cout<<"Insira o valor que deseja sacar: R$";
            cin>>valor;
            acm=valor;
            if(valor<aux->getSaldo()){
                acm=aux->getSaldo()-valor;
                aux->setSaldo(acm);
                aux->getListaTransacoes()->insere(0-valor);
                cout<<"Saque realizado!!!"<<endl<<"Saldo atual: R$"<<aux->getSaldo()<<"Limite atual: R$"<<aux->getLimite()<<endl;
            }else{
                decresceLimite=valor-aux->getSaldo();
                if(decresceLimite<aux->getLimite()){
                    aux->setLimite(aux->getLimite()-decresceLimite);
                    aux->setSaldo(0);
                    aux->getListaTransacoes()->insere(0-valor);
                    cout<<"Saque realizado!!!"<<endl<<"Saldo atual: R$"<<aux->getSaldo()<<"Limite atual: R$"<<aux->getLimite()<<endl;

                }else{
                    cout<<"Saldo e limites estourados para esse valor..."<<endl;
                    return;
                }
            }
            return;
        }
        aux=aux->getProx();
    }
    cout<<"Conta não encontrada..."<<endl<<endl;
    return;
}

void ListaLimite::imprimeExtrato(){
    int numero;
    CorrenteLimite* aux=new CorrenteLimite();

    cout<<"Insira o numero da conta: ";
    cin>>numero;

    aux=primeiro;

    while(aux){
        if(aux->getNumero()==numero){
            cout<<"Nome: "<<aux->getNome()<<endl<<"Numero da conta: "<<aux->getNumero()<<endl<<endl;
            aux->getListaTransacoes()->imprime();
            cout<<endl;
            cout<<"Saldo atual: R$"<<aux->getSaldo()<<endl;
            cout<<"Limite disponível: R$"<<aux->getLimite()<<endl;
            return;
        }
        aux=aux->getProx();
    }
    cout<<"Conta não encontrada"<<endl;
    return;

}