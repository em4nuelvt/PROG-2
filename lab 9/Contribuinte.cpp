#include "Contribuinte.hpp"
using namespace std;

Contribuinte::Contribuinte(){
    prox=NULL;
}

Contribuinte::~Contribuinte(){

}

Contribuinte* Contribuinte::getProx(){
    return this-> prox;
}

void Contribuinte::setProx(Contribuinte* prox){
    this-> prox= prox;
}