#include "listaProfessor.hpp"
#include <iostream>
using namespace std;

ListaProfessor::ListaProfessor()
{
    primeiro=NULL;
    ultimo=NULL;
}

ListaProfessor::~ListaProfessor()
{
}

bool ListaProfessor ::vazia(){
    return primeiro==NULL;
}

void ListaProfessor::imprime(){
    Professor *aux=primeiro;
    int cont =1;
    while(aux){
        cout<<cont<<": "<<aux->getNome()<<endl;
        aux=aux->getProx();
        cont++;
    }
}

void ListaProfessor::inserir(){
    string nomeAux;
    string enderecoAux;
    string titulacaoAux;
    string cursoAux;

    cout<<"Digite o nome do professor: ";
    setbuf(stdin,0);
    getline(cin,nomeAux);

    cout<<"Digite o endereco do professor: ";
    setbuf(stdin,0);
    getline(cin,enderecoAux);

    cout<<"Digite a titulaçao do professor: ";
    setbuf(stdin,0);
    getline(cin,titulacaoAux);

    cout<<"Digite o curso do professor: ";
    setbuf(stdin,0);
    getline(cin,cursoAux);

    Professor *novo= new Professor();
    novo->setEndereco(enderecoAux);
    novo->setTitulacao(titulacaoAux);
    novo->setNome(nomeAux);
    novo->setCurso(cursoAux);

    if (vazia()){
        primeiro=novo;
        ultimo= primeiro;
        return;
    }
    ultimo->setProx(novo);
    ultimo=novo;

}

