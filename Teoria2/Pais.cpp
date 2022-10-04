#include "Pais.hpp"

using namespace std;

Pais::Pais(){}

Pais::~Pais(){}

void Pais::setNome(string nome){
    this->nome=nome;
}

void Pais:: setCapital(string capital){
    this->capital=capital;
}

void Pais:: setDimensao(double dimensao){
    this-> dimensao=dimensao;
}

void Pais:: setListaDePaises(Pais* listaDePaises){
    this->listaDePaises=listaDePaises;
}

string Pais::getNome(){
    return this->nome;
}
string Pais::getCapital(){
    return this->capital;
}

double Pais::getDimensao(){
    return this->dimensao;
}
Pais* Pais::getListaDePaises(){
    return this-> listaDePaises;
}

void Pais:: verificaIgual(Pais x){
    if (x.capital==this->capital&&x.dimensao==this->dimensao&&x.nome==nome)
        cout<<"Os países são iguais"<<endl;
    else
        cout<<"Os países são diferentes"<<endl;
}

void Pais:: verificaFronteiras(int tamanhoVetor){
    cout<<"Lista de Países: ";
    for(int i=0;i<tamanhoVetor;i++){
        cout<<listaDePaises[i].getNome()<<endl;
    }

}

