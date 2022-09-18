#include <iostream>
#include "triangulo.hpp"


using namespace std;

int main(){
    float lado1,lado2,lado3;
    cout<<"Digite lado 1: ";
    cin>>lado1;

    cout<< "Digite lado 2: ";
    cin>>lado2;

    cout<< "Digite lado 3: ";
    cin>>lado3;

    Triangulo triangulo1(lado1,lado2,lado3);
    Triangulo triangulo2(4,5,5);
    Triangulo triangulo3(4,5,5);

    
    cout<<"numero de instancias: " << triangulo1.cont<< endl;
    
}
