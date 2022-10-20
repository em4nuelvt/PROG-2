

#include "ListaPoupanca.hpp"

using namespace std;

ListaPoupanca::ListaPoupanca(){
    primeiro=NULL;
    ultimo=NULL;
}

ListaPoupanca::~ListaPoupanca(){

}

bool ListaPoupanca::vazia(){
    return primeiro==NULL;
}

void ListaPoupanca::cadastra(){
    int numero;
    string nome;
    float saldo;
    int dia;
    ListaTransacoes* transacoes=new ListaTransacoes();
    transacoes->setPrimeiro(NULL);
    transacoes->setUltimo(NULL);

    ContaPoupanca *aux= new ContaPoupanca();

    

    std::cout<<"Digite o numero da conta poupança: ";
    cin>>numero;
    
    aux=primeiro;
    while(aux){
        if(aux->getNumero()==numero){
            cout<<"Conta ja existe."<<endl;
            return;
        }
        aux=aux->getProx();
    }

    cout<<"Digite o dia de aniversário da conta: ";
    cin>>dia;


    std::cout<<"Digite o nome do titular: ";
    setbuf(stdin,0);
    getline(cin,nome);

    std::cout<<"Digite o saldo inicial da conta: ";
    cin>>saldo;

    ContaPoupanca *novo= new ContaPoupanca();
    novo->setNome(nome);
    novo->setNumero(numero);
    novo->setSaldo(saldo);
    novo->setDia(dia);

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


void ListaPoupanca::deposito(){

    if(vazia()){
        cout<<"Cadastre uma conta..."<<endl;
        return;
    }
    ContaPoupanca* aux=new ContaPoupanca();
    aux=primeiro;
    int numero;
    string data;
    string descricao;
    float acm;
    float valor;
    bool existe=false;

    std::cout<<"Insira o numero da conta que deseja realizar o depósito: ";
    cin>>numero;

    while(aux){
        if(numero==aux->getNumero()){
            std::cout<<"Digite o valor que deseja depositar: R$";
            cin>>acm;
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

void ListaPoupanca::saque(){
    if(vazia()){
        cout<<"Cadastre uma conta..."<<endl;
        return;
    }
    ContaPoupanca* aux=new ContaPoupanca();
    aux=primeiro;
    int numero;
    float valor,acm;

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
                cout<<"Saque realizado!!!"<<endl<<"Saldo atual: R$"<<aux->getSaldo()<<endl;
            }else{
                cout<<"Valor superior ao saldo da conta..."<<endl;
                cout<<"Transação negada."<<endl;
                cout<<"Saldo da conta: R$"<<aux->getSaldo()<<endl;

            }
            return;
        }
        aux=aux->getProx();
    }
    cout<<"Conta não encontrada..."<<endl<<endl;
    return;
}

void ListaPoupanca::imprimeExtratoP(){
    int numero;
    ContaPoupanca* aux=new ContaPoupanca();

    cout<<"Insira o numero da conta: ";
    cin>>numero;

    aux=primeiro;

    while(aux){
        if(aux->getNumero()==numero){
            cout<<"Nome: "<<aux->getNome()<<endl<<"Numero da conta: "<<aux->getNumero()<<endl<<"Dia Aniversario Conta: "<<aux->getDia()<<endl<<endl;
            aux->getListaTransacoes()->imprime();
            cout<<endl;
            cout<<"Saldo atual: R$"<<aux->getSaldo()<<endl;
            return;
        }
        aux=aux->getProx();
    }
    cout<<"Conta não encontrada"<<endl;
    return;



}