#include "PessoaJuridica.hpp"
#include <iostream>

using namespace std;

PessoaJuridica::PessoaJuridica(){
    prox=NULL;
}
PessoaJuridica::~PessoaJuridica(){

}
void PessoaJuridica::setCnpj(string cnpj){
    this->cnpj = cnpj;
}
void PessoaJuridica::setProx(PessoaJuridica* prox){
    this->prox=prox;
}

PessoaJuridica* PessoaJuridica::getProx(){
    return this->prox;
}
string PessoaJuridica::getCnpj(){
    return this->cnpj;
}