#include "Pessoa.hpp"
#include <iostream>

using namespace std;
Pessoa::Pessoa(){

};
Pessoa::~Pessoa(){
    
}

void Pessoa::setNome(string nome){
    this->nome=nome;
}
void Pessoa::setEndereco(string endereco){
    this->endereco=endereco;
}

string Pessoa::getEndereco(){
    return this->endereco;
}
string Pessoa::getNome(){
    return this->nome;
}