#include "Livro.hpp"

Livro::Livro(){
    prox=NULL;
    ant=NULL;
}

Livro::~Livro(){}

string Livro::getNome(){
    return this->nome;
}

unsigned long Livro::getIsbn(){
    return this->isbn;
}

Livro* Livro::getAnt(){
    return this->ant;
}

Livro* Livro::getProx(){
    return this->prox;
}

void Livro::setAnt(Livro* ant){
    this-> ant= ant;
}

void Livro::setProx(Livro* prox){
    this->prox= prox;
}

void Livro::setNome(string nome){
    this->nome= nome;
}

void Livro::setIsbn(unsigned long isbn){
    this-> isbn= isbn; 
}

