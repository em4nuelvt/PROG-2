#include "medico.hpp"
#include <iostream>
using namespace std;

Medico::Medico(){
    prox=NULL;
}
Medico::~Medico(){

}

void Medico::setCrm(long crm){
    this->crm=crm;
}
void Medico::setEspecialidade(string especialidade){
    this->especialidade=especialidade;
}
long Medico::getCrm(){
    return this-> crm;
}
string Medico::getEspecialidade(){
    return this-> especialidade;
}

void Medico::setProx(Medico *prox){
    this-> prox=prox;
}

Medico* Medico::getProx(){
    return this->prox;
}
