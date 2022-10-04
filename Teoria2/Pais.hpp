#ifndef __PAIS_HPP
#define __PAIS_HPP
#include <string>
#include <iostream>

using namespace std;

class Pais{

    private:
        string nome, capital;
        double dimensao;
        Pais* listaDePaises;
    public:
        Pais();
        virtual ~Pais();
        void setNome(string nome);
        void setCapital(string capital);
        void setDimensao(double dimensao);
        void setListaDePaises(Pais* listaDePaises);

        string getNome();
        string getCapital();
        double getDimensao();
        Pais* getListaDePaises();
        void verificaIgual(Pais x);
        void verificaFronteiras(int tamanhoVetor);
};

#endif