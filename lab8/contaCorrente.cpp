#include "contaCorrente.hpp"
using namespace std;

ContaCorrente::ContaCorrente(){
    prox=NULL;
}

ContaCorrente::~ContaCorrente(){

}

ContaCorrente* ContaCorrente::getProx(){
    return this->prox;
}

void ContaCorrente::setProx(ContaCorrente *prox){
    this-> prox= prox;
}