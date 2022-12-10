#include "Pessoa.hpp"

using namespace std;

Pessoa::Pessoa(){

}

Pessoa::~Pessoa(){

}

void Pessoa::setNome(string nome){
    this->nome= nome;
}

void Pessoa::setIR(float IR){
    this->IR=IR;
}

void Pessoa::setRendaBruta(float rendaBruta){
    this->rendaBruta= rendaBruta;
}

string Pessoa::getNome(){
    return this-> nome;
}

float Pessoa::getRendaBruta(){
    return this-> rendaBruta;
}

float Pessoa::getIR(){
    return this-> IR;
}