#include "consulta.hpp"
using namespace std;

Consulta::Consulta(){
    prox=NULL;
}

Consulta::~Consulta(){

}

void Consulta::setData(Data data){
    this-> data=data;
}
Data Consulta::getData(){
    return this->data;
}

void Consulta::setHora(string hora){
    this->hora=hora;
}
string Consulta::getHora(){
    return this->hora;
}

void Consulta::setCpf(long cpf){
    this->cpf=cpf;
}

long Consulta::getCpf(){
    return this->cpf;
}

void Consulta::setProx(Consulta* prox){
    this->prox= prox;
}
Consulta* Consulta:: getProx(){
    return this->prox;
}

long Consulta::getCrm(){
    return this-> crm;
}

void Consulta::setCrm(long crm){
    this->crm= crm; 
}