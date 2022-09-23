#include <iostream>
#include "produto.hpp"
using namespace std;


//construtores
Produto::Produto(){}

Produto::Produto(int id,string nome, float valor, int quantidade){
    this->id=id;
    this->nome=nome;
    this->valor=valor;
    this->quantidade=quantidade;
    this->prox=NULL;

}

//getters e setters
void Produto::setID(int id){
    this->id=id;
}
int Produto::obterID(){
    return this->id;
}
void Produto::setNome(string nome){
    this->nome=nome;
}
string Produto::obterNome(){
    return this->nome;
}

void Produto::setValor(float valor){
    this->valor=valor;
}
float Produto::obterValor(){
    return this-> valor;
}

void Produto::setQuantidade(int quantidade){
    this->quantidade= quantidade;
}
int Produto::obterQuantidade(){
    return this-> quantidade;
}

//manipular os nós
Produto* Produto::obterProx(){
    return prox;
}

void Produto::setProx(Produto* p){
    this->prox=p;
}