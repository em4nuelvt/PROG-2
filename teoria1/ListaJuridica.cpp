#include "ListaJuridica.hpp"

#include <iostream>

using namespace std;

ListaJuridica::ListaJuridica(){
    primeiro=NULL;
    ultimo=NULL;
}

ListaJuridica::~ListaJuridica(){

}
bool ListaJuridica::vazia(){
    return primeiro==NULL;
}


void ListaJuridica::insere(){
    string nomeAux;
    string enderecoAux;
    string cnpjAux;

    cout<<"Digite o nome: ";
    setbuf(stdin,0);
    getline(cin,nomeAux);

    cout<<"Digite o endereco: ";
    setbuf(stdin,0);
    getline(cin,enderecoAux);

    cout<<"Digite o cpf: ";
    setbuf(stdin,0);
    getline(cin,cnpjAux);

    PessoaJuridica* novo= new PessoaJuridica();
    novo->setNome(nomeAux);
    novo->setEndereco(enderecoAux);
    novo->setCnpj(cnpjAux);
    if(vazia()){
        primeiro=novo;
        ultimo=primeiro;
        novo->setProx(NULL);
        return;
    }
    ultimo->setProx(novo);
    ultimo=novo;
    return;
}

void ListaJuridica::imprime(){
    PessoaJuridica* aux=primeiro;
    int cont =1;
    while(aux){
        cout<<cont<<": "<<aux->getNome()<<endl;
        cont ++;
        aux=aux->getProx();
    }

}

PessoaJuridica* ListaJuridica:: getPrimeiro(){
    return this->primeiro;
}
PessoaJuridica* ListaJuridica:: getUltimo(){
    return this->ultimo;
}

void ListaJuridica::setPrimeiro(PessoaJuridica *primeiro){
    this->primeiro= primeiro;
}
void ListaJuridica::setUltimo(PessoaJuridica *ultimo){
    this->ultimo= ultimo;
}