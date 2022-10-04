#include "PessoaFisica.hpp"
#include <iostream>

using namespace std;

PessoaFisica::PessoaFisica(){
    ListaJuridica* cnpjs= new ListaJuridica();
    prox=NULL;
}
PessoaFisica::~PessoaFisica(){

}
void PessoaFisica::setCpf(string cpf){
    this->cpf = cpf;
}
void PessoaFisica::setProx(PessoaFisica* prox){
    this->prox=prox;
}

PessoaFisica* PessoaFisica::getProx(){
    return this->prox;
}
string PessoaFisica::getCpf(){
    return this->cpf;
}

ListaJuridica* PessoaFisica::getListaJ(){
    return this->cnpjs;
}