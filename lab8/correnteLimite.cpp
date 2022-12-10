#include "correnteLimite.hpp"

using namespace std;

CorrenteLimite::CorrenteLimite(){
    this->prox=NULL;
}

CorrenteLimite::~CorrenteLimite(){

}

void CorrenteLimite::setLimite(float limite){
    this->limite=limite;
}

float CorrenteLimite::getLimite(){
    return this->limite;
}

void CorrenteLimite:: setProx(CorrenteLimite* prox){
    this->prox= prox;
}

CorrenteLimite* CorrenteLimite::getProx(){
    return this->prox;
}