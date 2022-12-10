#ifndef _LISTA_PACIENTES_HPP
#define _LISTA_PACIENTES_HPP
#include "paciente.hpp"
#include <iostream>
using namespace std;

class ListaPacientes{
    private:
        Paciente* primeiro;
        Paciente* ultimo;
    public:
        ListaPacientes();
        virtual ~ListaPacientes();
        int static contador;
        void cadastrarPaciente();
        void imprimirDadosDoPaciente();
        void removerPaciente();
        void imprimirListaDePacientes();
        bool vazia();
        Paciente* getPrimeiro();
        void setPrimeiro(Paciente* primeiro);
};

#endif