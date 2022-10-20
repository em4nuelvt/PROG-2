/* #ifndef _LISTA_CORRENTE_HPP
#define _LISTA_CORRENTE_HPP
#include "contaCorrente.hpp"


class ListaCorrente{
    private:
        ContaCorrente* primeiro;
        ContaCorrente* ultimo;
    public:
        ListaCorrente();
        virtual ~ListaCorrente();
        void deposito();
        void saque();
        void imprimeExtrato();
        void cadastra();
        void vazia();

};
#endif */

#include "ListaCorrente.hpp"
using namespace std;

ListaCorrente::ListaCorrente(){
    primeiro=NULL;
    ultimo=NULL;
}

ListaCorrente::~ListaCorrente(){

}

bool ListaCorrente::vazia(){
    return primeiro==NULL;
}



void ListaCorrente::cadastra(){
    int numero;
    string nome;
    float saldo;
    ListaTransacoes* transacoes=new ListaTransacoes();
    transacoes->setPrimeiro(NULL);
    transacoes->setUltimo(NULL);
    ContaCorrente* aux= new ContaCorrente();

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

    ContaCorrente *novo= new ContaCorrente();
    novo->setNome(nome);
    novo->setNumero(numero);
    novo->setSaldo(saldo);

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

void ListaCorrente::deposito(){
    if(vazia()){
        cout<<"Cadastre uma conta..."<<endl;
        return;
    }
    ContaCorrente* aux=new ContaCorrente();
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

void ListaCorrente::saque(){
    if(vazia()){
        cout<<"Cadastre uma conta..."<<endl;
        return;
    }
    ContaCorrente* aux=new ContaCorrente();
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

void ListaCorrente::imprimeExtrato(){
    int numero;
    ContaCorrente* aux=new ContaCorrente();

    cout<<"Insira o numero da conta: ";
    cin>>numero;

    aux=primeiro;

    while(aux){
        if(aux->getNumero()==numero){
            cout<<"Nome: "<<aux->getNome()<<endl<<"Numero da conta: "<<aux->getNumero()<<endl<<endl;
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