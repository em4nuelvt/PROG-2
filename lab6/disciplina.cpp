#include "disciplina.hpp"
#include <iostream>

using namespace std;

Disciplina::Disciplina(){

}

void Disciplina::setNome(string nome){
    this->nome=nome;
}

void Disciplina::setCh(int ch){
    this->ch=ch;
}

void Disciplina::setProfessor(Professor *professor){
    this->professor=professor;
}

void Disciplina::setProx(Disciplina *prox){
    this->prox=prox;
}

string Disciplina::getNome(){
    return this->nome;
}
int Disciplina::getCh(){
    return this-> ch;
}
Professor* Disciplina::getProfessor(){
    return this->professor;
}

Disciplina* Disciplina::getProx(){
    return this->prox;
}

