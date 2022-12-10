#ifndef _LISTA_CONSULTAS_HPP
#define _LISTA_CONSULTAS_HPP
#include "consulta.hpp"
#include "ListaMedicos.hpp"
#include "ListaPacientes.hpp"
#include <iostream>
using namespace std;

class ListaConsultas{
    private:
        Consulta* primeiro;
        Consulta* ultimo;
    public:
        int static contador;
        ListaConsultas();
        virtual ~ListaConsultas();
        bool vazia();
        void cadastrarConsulta(ListaMedicos medicos, ListaPacientes pacientes);
        void removerConsulta();
        void imprimirConsultas(ListaMedicos medicos, ListaPacientes pacientes);
        void imprimirConsultaEspecifica(ListaMedicos medicos, ListaPacientes pacientes);


};
#endif