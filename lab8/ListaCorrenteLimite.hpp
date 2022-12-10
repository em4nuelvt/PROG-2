#ifndef _LIST_CORRENTE_LIMITE_HPP
#define _LISTA_CORRENTE_LIMITE_HPP
#include "correnteLimite.hpp"


class ListaLimite{
    private:
        CorrenteLimite* primeiro;
        CorrenteLimite* ultimo;
    public:
        ListaLimite();
        virtual ~ListaLimite();
        void deposito();
        void saque();
        void imprimeExtrato();
        void cadastra();
        bool vazia();

};
#endif