#ifndef __LISTA_DISCIPLINAS_HPP
#define __LISTA_DISCIPLINAS_HPP
#include "disciplina.hpp"
#include <iostream>

using namespace std;

class ListaDisciplinas{
    private:
        Disciplina *primeiro;
        Disciplina *ultimo;
    public:
        ListaDisciplinas();
        virtual ~ListaDisciplinas();
        bool vazia();
        void imprimeDisciplinas();
        void inserirFim();
        

};

#endif