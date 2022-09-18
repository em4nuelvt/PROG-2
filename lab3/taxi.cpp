#include <iostream>
#include "Taxi.hpp"
using namespace std;


    void Taxi::setNome(string nome){
        this->nome =nome;
    }
    string Taxi::getNome(){
        return nome;
    }

    void Taxi::setModelo(string modelo){
        this->modelo =modelo;
    }
    string Taxi::getModelo(){
        return modelo;
    }

    void Taxi::setMotorizacao(string motorizacao){
        this->motorizacao=motorizacao;
    }
    string Taxi::getMotorizacao(){
        return motorizacao;
    }

    void Taxi::setFabricante(string fabricante){
        this->fabricante =fabricante;
    }
    string Taxi::getFabricante(){
        return fabricante;
    }

    void Taxi::setKmf(float kmf){
        this->kmf=kmf;
    }
    float Taxi::getKmf(){
        return kmf;
    }

    void Taxi::setKmi(float kmi){
        this->kmi=kmi;
    }
    float Taxi::getKmi(){
        return kmi;
    }

    void Taxi::imprimir(){
        cout<<"Nome do motorista: "<<nome<<endl;
        cout<<"Veículo: "<<fabricante<<" "<<modelo<<endl;
        cout<<"Motorizacao: "<<motorizacao<<endl;
        cout<<"Quilometragem inicial: "<<kmi<<endl;
        cout<<"Quilometragem final: "<<kmf<<endl;
        cout<<"Preço a ser pago: R$"<<(kmf-kmi)*3.75<<endl;

    }
    

