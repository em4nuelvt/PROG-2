#include "Pessoa.hpp"

Pessoa::Pessoa(){

}
Pessoa::~Pessoa(){

}
int Pessoa::getIdade(){
    return this->idade;
}
string Pessoa::getNome(){
    return this-> nome;
}

void Pessoa::setNome(string nome){
    this->nome=nome;
}
void Pessoa::setIdade(int idade){
    this->idade=idade;
}