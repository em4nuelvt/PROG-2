#include "pessoa.hpp"
using namespace std;

Pessoa::Pessoa(){

}
Pessoa::~Pessoa(){

}

void Pessoa::setNome(string nome){
    this->nome=nome;
}

void Pessoa::setCpf(long cpf){
    this->cpf=cpf;
}
void Pessoa::setEndereco(string endereco){
    this->endereco= endereco;
}
void Pessoa::setTelefone(string telefone){
    this->telefone=telefone;
}
void Pessoa::setIdentidade(string identidade){
    this->identidade=identidade;
}
void Pessoa::setSexo(char sexo){
    this->sexo=sexo;
}

string Pessoa::getNome(){
    return this->nome;
}
string Pessoa::getEndereco(){
    return this-> endereco;
}
string Pessoa::getTelefone(){
    return this->telefone;
}
string Pessoa::getIdentidade(){
    return this-> identidade;
}
char Pessoa::getSexo(){
    return this-> sexo;
}
long Pessoa::getCpf(){
    return this-> cpf;
}
