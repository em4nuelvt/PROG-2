#include "listaDisciplinas.hpp"
#include <iostream>
using namespace std;

ListaDisciplinas::ListaDisciplinas(){
    primeiro=NULL;
    ultimo=NULL;
}

ListaDisciplinas::~ListaDisciplinas(){

}

bool ListaDisciplinas::vazia(){
    return primeiro==NULL;
} 

void ListaDisciplinas::inserirFim(){
    string nomeAux;
    int chAux;
    string nomeProfessor;
    string enderecoProfessor;
    string titulacaoProfessor;
    string cursoProfessor;

    cout<<"Digite o nome da disciplina: ";
    setbuf(stdin,0);
    getline(cin,nomeAux);

    cout<<"Digite a carga horária da disciplina: ";
    cin>>chAux;

    cout<<"Digite o nome do professor responsável: ";
    setbuf(stdin,0);
    getline(cin,nomeProfessor);

    cout<<"Digite o endereco do professor responsável: ";
    setbuf(stdin,0);
    getline(cin,enderecoProfessor);

    cout<<"Digite a titulação do professor responsável: ";
    setbuf(stdin,0);
    getline(cin,titulacaoProfessor);

    
    cout<<"Digite o curso do professor responsável: ";
    setbuf(stdin,0);
    getline(cin,cursoProfessor);

    Professor *p= new Professor();
    p->setCurso(cursoProfessor);
    p->setTitulacao(titulacaoProfessor);
    p->setNome(nomeProfessor);
    p->setEndereco(enderecoProfessor);
    
    Disciplina* novo= new Disciplina();
    novo->setNome(nomeAux);
    novo->setCh(chAux);
    novo->setProfessor(p);
    
    if(vazia()){
        primeiro=novo;
        ultimo=primeiro;
        return;
    }
    ultimo->setProx(novo);
    ultimo=novo;


}
void ListaDisciplinas::imprimeDisciplinas(){
    Disciplina *aux=primeiro;
    int cont =1;
    while(aux){
        cout<<cont<<": "<<aux->getNome()<<endl;
        aux=aux->getProx();
    }
}