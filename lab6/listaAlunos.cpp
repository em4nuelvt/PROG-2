#include "listaAlunos.hpp"
#include <iostream>

using namespace std;

ListaAlunos::ListaAlunos(){
    primeiro=NULL;
    ultimo=NULL;
}
ListaAlunos:: ~ListaAlunos(){

}

bool ListaAlunos::vazia(){
    return primeiro==NULL;
}

void ListaAlunos::imprime(){
    Aluno *aux=primeiro;
    int cont =1;
    while(aux){
        cout<<cont<<": "<<aux->getNome()<<endl;
        aux=aux->getProx();
        cont++;
    }
}

void ListaAlunos::inserirFim(){
    string nomeAux;
    string enderecoAux;
    int matriculaAux;

    cout<<"Digite o nome do aluno: ";
    setbuf(stdin,0);
    getline(cin,nomeAux);

    cout<<"Digite o endereco do aluno: ";
    setbuf(stdin,0);
    getline(cin,enderecoAux);

    cout<< "Digite o numero de matrícula do aluno: ";
    cin>>matriculaAux;

    Aluno *novo = new Aluno();
    novo->setNome(nomeAux);
    novo->setEndereco(enderecoAux);
    novo->setMatricula(matriculaAux);

    if(vazia()){
        primeiro = novo;
        ultimo=primeiro;
        return;
    }
    ultimo->setProx(novo);
    ultimo=novo;
    
}