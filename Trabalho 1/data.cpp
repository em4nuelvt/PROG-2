#include "data.hpp"
#include <iostream>
using namespace std;

Data::Data(){

}

Data::~Data(){

}

void Data::setDia(int dia ){
    this->dia=dia;
}
void Data::setAno(int ano){
    this->ano=ano;
}
void Data::setMes(int mes){
    this->mes= mes;
}

int Data::getAno(){
    return this->ano;
}
int Data::getMes(){
    return this->mes;
}
int Data::getDia(){
    return this->dia;
}