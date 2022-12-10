#include "paciente.hpp"
using namespace std;

Paciente::Paciente(){
    prox=NULL;
}
Paciente::~Paciente(){

}

string Paciente::getRelato(){
    return this->relato;
}
void Paciente::setRelato( string relato){
    this->relato=relato;
}

string Paciente::getMedicacao(){
    return this-> medicacao;
}
void Paciente::setMedicacao(string medicacao){
    this->medicacao=medicacao;
}

string Paciente::getDataUltimaConsulta(){
    return this-> dataUltimaConsulta;
}
void Paciente::setDataUltimaConsulta(string dataUltimaConsulta){
    this->dataUltimaConsulta=dataUltimaConsulta;
}

Paciente* Paciente::getProx(){
    return this-> prox;
}
void Paciente::setProx(Paciente* prox ){
    this->prox=prox;
}