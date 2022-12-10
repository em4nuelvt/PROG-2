#ifndef _LISTA_CONTRIBUINTES_HPP
#define _LISTA_CONTRIBUINTES_HPP

#include "Contribuinte.hpp"

class ListaContribuintes{
    private: 
        Contribuinte* primeiro;
        Contribuinte* ultimo;
    public:
        ListaContribuintes();
        virtual ~ListaContribuintes();
        void cadastro();
        void removeCpf();
        void removeCnpj();
        float calculaIR(float renda);
        bool vazia();
        void imprimeTodos();
        void consultaFisica();
        void consultaJuridica();

};
#endif