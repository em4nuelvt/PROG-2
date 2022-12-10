#ifndef _LISTA_MEDICOS_HPP
#define _LISTA_MEDICOS_HPP
#include "medico.hpp"
#include <iostream>
using namespace std;

class ListaMedicos{
    private: 
        Medico* primeiro;
        Medico* ultimo;
    public:
        ListaMedicos();
        virtual ~ListaMedicos();
        void cadastraMedico();
        void removerMedico();
        bool vazia();
        void imprimirDados();
        void imprimirTodos();
        static int contador;
        Medico* getPrimeiro();

};
#endif