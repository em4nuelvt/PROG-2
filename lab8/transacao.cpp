#include "transacao.hpp"

using namespace std;

Transacao::Transacao(){
    prox=NULL;
}

Transacao::~Transacao(){

}

string Transacao:: getData(){
    return this->data;
}
string Transacao::getDescricao(){
    return this->descricao;
}
float Transacao::getValor(){
    return this-> valor;
}

Transacao* Transacao::getProx(){
    return this->prox;

}

void Transacao::setData(string data){
    this->data=data;
}

void Transacao::setDescricao(string descricao){
    this->descricao=descricao;
}

void Transacao::setValor(float valor){
    this->valor=valor;
}
void Transacao::setProx(Transacao* prox){
    this->prox=prox;
}