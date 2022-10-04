#ifndef __LISTA_FISICA_HPP
#define __LISTA_FISICA_HPP
#include "PessoaFisica.hpp"

#include <iostream>

using namespace std;

class ListaFisica{
    private:
        PessoaFisica *primeiro;
        PessoaFisica *ultimo;
    public:
        ListaFisica();
        virtual ~ListaFisica();
        void insere();
        void imprime();
        bool vazia();
        void associa(ListaJuridica* lista);
        void imprimeAssociacoes();

};
#endif 