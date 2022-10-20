#include "contaPoupanca.hpp"
using namespace std;

ContaPoupanca::ContaPoupanca(){
    prox=NULL;
}

ContaPoupanca::~ContaPoupanca(){

}

void ContaPoupanca::setDia(int dia){
    this->dia=dia;
}
int ContaPoupanca::getDia(){
    return this->dia;
}

void ContaPoupanca::setProx(ContaPoupanca* prox){
    this-> prox=prox;
}
ContaPoupanca* ContaPoupanca::getProx(){
    return this->prox;
}