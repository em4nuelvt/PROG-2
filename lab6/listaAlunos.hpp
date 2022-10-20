#ifndef __LISTA_ALUNOS_HPP
#define __LISTA_ALUNOS_HPP
#include "aluno.hpp"
#include <iostream>
using namespace std;

class ListaAlunos{
    private:
        Aluno* primeiro;
        Aluno* ultimo;
    public:
        ListaAlunos();
        virtual ~ListaAlunos();
        bool vazia();
        void imprime();
        void inserirFim();

};

#endif