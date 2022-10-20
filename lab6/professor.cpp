#include "professor.hpp"
#include <iostream>
using namespace std;

Professor::Professor(){
    prox=NULL;
}

void Professor::setTitulacao(string titulacao){
    this->titulacao=titulacao;
}

string Professor::getTitulacao(){
    return this->titulacao;
}

void Professor::setCurso(string curso){
    this-> curso=curso;
}

string Professor::getCurso(){
    return this->curso;
}

void Professor::setProx(Professor *prox){
    this-> prox= prox;
}

Professor* Professor::getProx(){
    return this->prox;
}
