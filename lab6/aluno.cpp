#include "aluno.hpp"
using namespace std;

Aluno::Aluno(){
    prox=NULL;  
}

int Aluno::getMatricula(){
    return this-> matricula;
}

void Aluno::setMatricula(int matricula){
    this->matricula= matricula;
}

Aluno* Aluno::getProx(){
    return this->prox;
}

void Aluno::setProx(Aluno* prox){
    this-> prox=prox;
}

