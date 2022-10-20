#include "conta.hpp"

using namespace std;

Conta::Conta(){
    this->transacoes= new ListaTransacoes(); 
}

Conta::~Conta(){

}

int Conta::getNumero(){
    return this->numero;
}
void Conta::setNumero(int numero){
    this->numero=numero;
}

void Conta::setNome(string nome){
    this->nome=nome;
}

string Conta::getNome(){
    return this->nome;
}

float Conta::getSaldo(){
    return this->saldo;
}

void Conta::setSaldo(float saldo){
    this-> saldo=saldo;
}

ListaTransacoes* Conta::getListaTransacoes(){
    return this-> transacoes;
}
void Conta::setListaTransacoes(ListaTransacoes* transacoes){
    this->transacoes=transacoes;
}