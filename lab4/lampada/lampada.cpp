#include "lampada.hpp"
#include <iostream>
#include <string>

using namespace std;

int Lampada::cont=0;

Lampada::Lampada(string modelo, string tensao, int estado){
    this->modelo=modelo;
    this-> tensao= tensao;
    this-> estado= estado;
    cont ++;
}

void Lampada::setModelo(string modelo){
    this->modelo=modelo;
}

void Lampada::setTensao(string tensao){
    this->tensao=tensao;
}

void Lampada::setEstado(int estado){
    this->estado=estado;
}

string Lampada::getModelo(){
    return this-> modelo;
}

string Lampada::getTensao(){
    return this-> tensao;
}

int Lampada::getEstado(){
    if(this->estado==0){
        cout<<"Lampada desligada...";
    }else{
        cout<<"Lampada ligada...";
    }
    return this-> estado;
}

void Lampada::mudarEstado(){
    if(estado==0){
        this->estado=1;
    }else{
        this->estado=0;
    }
}

void Lampada::ligar(){
    if (estado!=0){
        cout<<"A lampada ja está ligada..."<<endl;
        return;
    }
    cout<<"Ligando a lampada"<< endl;
    mudarEstado();
}

void Lampada::desligar(){
    if (estado==0){
        cout<<"A lampada ja está desligada..."<<endl;
        return;
    }
    cout<<"Desligando a lampada..."<<endl;
    mudarEstado();
}