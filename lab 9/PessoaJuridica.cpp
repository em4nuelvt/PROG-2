#include "PessoaJuridica.hpp"


using namespace std;

PessoaJuridica::PessoaJuridica(){

}

PessoaJuridica::~PessoaJuridica(){

}

unsigned long long PessoaJuridica::getCnpj(){
    return this->cnpj; 
}

void PessoaJuridica::setCnpj(unsigned long long cnpj){
    this-> cnpj= cnpj;
}

