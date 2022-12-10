#ifndef _LISTA_CORRENTE_HPP
#define _LISTA_CORRENTE_HPP
#include "contaCorrente.hpp"


class ListaCorrente{
    private:
        ContaCorrente* primeiro;
        ContaCorrente* ultimo;
    public:
        ListaCorrente();
        virtual ~ListaCorrente();
        void deposito();
        void saque();
        void imprimeExtrato();
        void cadastra();
        bool vazia();

};
#endif