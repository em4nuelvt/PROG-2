#include <iostream>
#include "triangulo.hpp"

using namespace std;

int Triangulo::cont=0;

Triangulo::Triangulo(float lado1,float lado2, float lado3){
    this->lado1=lado1;
    this->lado2=lado2;
    this->lado3=lado3;
    verificarLados(this->lado1,this->lado2,this->lado3);
    caracterizaTriangulo(this->lado1, this->lado2,this->lado3);
    cont++;
}
Triangulo::Triangulo(){
    cont++;
}

void Triangulo::verificarLados(float lado1, float lado2, float lado3){
    if (!(((lado1+lado2)>lado3)&&((lado3+lado2)>lado1)&&((lado1+lado3)>lado2))){
        cout<<"Lados informados são inválidos"<<endl;
        cout<<"Digite novamente o lado 1: ";
        cin>> this->lado1;

        cout<<"Digite novamente o lado 2: ";
        cin>> this->lado2;

        cout<<"Digite novamente o lado 3: ";
        cin>> this->lado3;
        verificarLados(this->lado1,this->lado2,this->lado3);
    }else{
        return;
    }
}

void Triangulo::setLado1(float lado1){
    this->lado1=lado1;
    verificarLados(this->lado1,this->lado2,this->lado3);
}

void Triangulo::setLado2(float lado2){
    this->lado2=lado2;
}

void Triangulo::setLado3(float lado3){
    this->lado3=lado3;
}

float Triangulo::getLado1(){
    return this-> lado1;
}

float Triangulo::getLado2(){
    return this-> lado1;
}

float Triangulo::getLado3(){
    return this-> lado1;
}

void Triangulo::caracterizaTriangulo(float lado1, float lado2, float lado3){
    if(lado1==lado2 && lado2==lado3){
        cout<<"Triangulo equilátero!!!"<<endl;
    }
    else if(lado1!=lado2 && lado2!=lado3 &&lado3!=lado1){
        cout<<"Triangulo escaleno!!!"<<endl;
    }
    else{
        cout<<"Triangulo isóceles!!!"<<endl;
    }
}