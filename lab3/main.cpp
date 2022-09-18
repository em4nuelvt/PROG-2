#include <iostream>
#include "Taxi.hpp"
#include "taxi.cpp"
#include <string>

using namespace std;

int main(){
    Taxi taxi;
    string modelo;
    string motorizacao;
    string fabricante;
    string nome;
    float kmi;
    float kmf;

    cout<<"Digite o nome do motorista: ";
    setbuf(stdin,0);
    getline(cin,nome);

    cout<<"Digite o fabricante do carro: ";
    setbuf(stdin,0);
    getline(cin,fabricante);

    cout<<"Digite o modelo do carro: ";
    setbuf(stdin,0);
    getline(cin,modelo);

    cout<<"Digite a motorizacao do veiculo: ";
    setbuf(stdin,0);
    getline(cin,motorizacao);

    cout<<"Digite a quilometragem inicial: ";
    cin>>kmi;

    cout<<"Digite a quilometragem final: ";
    cin>>kmf;

    taxi.setNome(nome);
    taxi.setFabricante(fabricante);
    taxi.setKmf(kmf);
    taxi.setKmi(kmi);
    taxi.setModelo(modelo);
    taxi.setMotorizacao(motorizacao);

    cout<<"\n\n"<<endl;

    taxi.imprimir();
    cout<<endl;
    

    return 0;
    
}