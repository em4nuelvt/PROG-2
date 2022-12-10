#include "PessoaFisica.hpp"

using namespace std;

PessoaFisica::PessoaFisica(){

}

PessoaFisica::~PessoaFisica(){

}

unsigned long long PessoaFisica::getCpf(){
    return this->cpf; 
}

void PessoaFisica::setCpf(unsigned long long cpf){
    this-> cpf= cpf;
}

