#include "pessoa.hpp"
#include <iostream> 

using namespace std;
Pessoa::Pessoa(){
    
}
void Pessoa::setEndereco(string endereco){
    this-> endereco=endereco;
}
string Pessoa::getEndereco(){
    return this->endereco;
}

void Pessoa::setNome(string nome){
    this->nome=nome;
}
string Pessoa::getNome(){
    return this-> nome;
}
