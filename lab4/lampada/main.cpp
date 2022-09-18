#include <iostream>
#include "lampada.hpp"
#include <string>

using namespace std;

int main(){
    string modelo;
    string tensao;
    int estado;

    cout<<"Digite o modelo: ";
    cin>>modelo;
    cout<<"Digite a tensao: ";
    cin>>tensao;
    cin.ignore();
    cout<<"Digite o estado da lampada (0-Desligada; 1-Ligada ): "; //qualquer valor diferente de 0 é ligado
    cin>>estado;


    Lampada lampada(modelo, tensao,estado);
    cout<<"\n\nModelo: "<<lampada.getModelo()<<endl;
    cout<<"Tensao: "<<lampada.getTensao()<<endl;
    cout<<"Estado: "<<lampada.getEstado()<<endl;
    
    lampada.desligar();
    lampada.ligar();

    Lampada lampada3(modelo, tensao,estado);
    Lampada lampada4(modelo, tensao,estado);

    cout<<"Numero de instancias de teste: "<<lampada.cont<<endl;


    


}