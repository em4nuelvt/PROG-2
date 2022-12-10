#include "Pessoa.hpp"

Pessoa::Pessoa(){
    prox=NULL;
}
Pessoa::~Pessoa(){

}

void Pessoa::setCpf(long cpf){
    this-> cpf= cpf;
}

void Pessoa::setNome(string nome){
    this->nome=nome;
}

void Pessoa::setProx(Pessoa* prox){
    this->prox= prox;
}

string Pessoa::getNome(){
    return this-> nome;
}

long Pessoa::getCpf(){
    return this->cpf;
}

Pessoa* Pessoa::getProx(){
    return this-> prox;
}