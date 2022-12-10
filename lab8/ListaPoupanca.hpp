#ifndef _LISTA_POUPANCA_HPP
#define _LISTA_POUPANCA_HPP
#include "contaPoupanca.hpp"
using namespace std;

class ListaPoupanca{
    private:
        ContaPoupanca* primeiro;
        ContaPoupanca* ultimo;
    public:
        ListaPoupanca();
        virtual ~ListaPoupanca();
        void deposito();
        void saque();
        void imprimeExtratoP();
        void cadastra();
        bool vazia();

};
#endif