#include "Pais.hpp"

#include <iostream>

using namespace std;

int main(){

    Pais p;
    Pais Canada;
    Canada.setCapital("Toronto");
    Canada.setNome("Canadá");
    Canada.setDimensao(1000000.0);

    int qntd;
    string nome,capital;
    double dimensao;


    cout<<"Digite o nome do país: ";
    setbuf(stdin,0);
    getline(cin,nome);

    cout<<"Digite a capital do país: ";
    setbuf(stdin,0);
    getline(cin,capital);

    cout<<"Digite a dimensão do país(km quadrado): ";
    cin>>dimensao;

    p.setCapital(capital);
    p.setNome(nome);
    p.setDimensao(dimensao);

    cout<<"Insira a quantidade de países que fazem fronteira: ";
    cin>>qntd;

    Pais *listaDePaises=(Pais*)malloc(sizeof(Pais)*qntd);

    for(int i=0;i<qntd;i++){
            cout<<"Digite o nome do país: ";
            setbuf(stdin,0);
            getline(cin,nome);

            cout<<"Digite a capital do país: ";
            setbuf(stdin,0);
            getline(cin,capital);

            cout<<"Digite a dimensão do país(km quadrado): ";
            cin>>dimensao;

            listaDePaises[i].setCapital(capital);
            listaDePaises[i].setNome(nome);
            listaDePaises[i].setDimensao(dimensao);

    }
    p.setListaDePaises(listaDePaises);
    cout<<"Verificando as fronteiras do país "<<p.getNome()<<endl;
    p.verificaFronteiras(qntd);

    cout<<"Verificando se os países são iguais:  "<<endl;
    p.verificaIgual(Canada);

   return 0;
}