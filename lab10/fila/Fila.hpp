#ifndef _FILA_HPP
#define _FILA_HPP
#include "Pessoa.hpp"
class Fila{
    private: 
        Pessoa* primeiro;
        Pessoa* ultimo;
    public:
        static int cont;
        static int contPrioridade; 
        Fila();
        virtual ~Fila();
        void inserir();
        void remover();
        void imprimir();
        bool vazia();
        void adtendimentoPrioritario();


};

#endif