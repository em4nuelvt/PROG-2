/* #ifndef _LISTA_TRANSACOES_HPP
#define _LISTA_TRANSACOES_HPP

#include "transacao.hpp"

class ListaTransacoes{
    private:
        ListaTransacoes* primeiro;
        ListaTransacoes* ultimo;
    public:
        ListaTransacoes();
        virtual ~ListaTransacoes();
        bool vazia();
        void insere();
        void imprime();
};
#endif */


#include "ListaTransacoes.hpp"

using namespace std;

ListaTransacoes::ListaTransacoes(){
    primeiro=NULL;
    ultimo=NULL;

}

ListaTransacoes::~ListaTransacoes(){

}

bool ListaTransacoes::vazia(){
    return primeiro==NULL;
}

Transacao* ListaTransacoes::getPrimeiro(){
    return this-> primeiro;
}
Transacao* ListaTransacoes::getUltimo(){
    return this-> ultimo;
}


void ListaTransacoes::insere(float valor){
    string data, descricao;
    Transacao* aux=new Transacao();

    cout<<"Digite a data da transacao: ";
    setbuf(stdin,0);
    getline(cin,data);

    cout<<"Digite a descrição da transacao: ";
    setbuf(stdin,0);
    getline(cin,descricao);

    aux->setData(data);
    aux->setDescricao(descricao);
    aux->setValor(valor);

    if(vazia()){
        primeiro=aux;
        ultimo=primeiro;
        primeiro->setProx(NULL);
        return;
    }
    ultimo->setProx(aux);
    ultimo=aux;
    ultimo->setProx(NULL);
    return;

}

void ListaTransacoes::imprime(){
    Transacao* aux=new Transacao();
    aux=primeiro;
    int contador=0;
    while(aux){
        cout<<endl<<"Transação "<<contador<<endl;
        if(aux->getValor()>0){
            cout<<"DEPOSITO  "<<"+R$"<<aux->getValor()<<"  Data: "<<aux->getData()<<endl;
        }else{
            cout<<"SAQUE   "<<"R$"<<aux->getValor()<<"  Data: "<<aux->getData()<<endl;
        }
        
        cout<<"Descricao: "<<aux->getDescricao()<<endl;
        aux=aux->getProx();
        contador++;
    }

}

void ListaTransacoes::setPrimeiro(Transacao* primeiro){
    this-> primeiro=primeiro;
}
void ListaTransacoes::setUltimo(Transacao* ultimo){
    this-> ultimo=ultimo;
}




