#ifndef __LISTA_JURIDICA_HPP
#define __LISTA_JURIDICA_HPP
#include "PessoaJuridica.hpp"

#include <iostream>

using namespace std;

class ListaJuridica{
    private:
        PessoaJuridica *primeiro;
        PessoaJuridica *ultimo;
    public:
        ListaJuridica();
        virtual ~ListaJuridica();
        void insere();
        void imprime();
        bool vazia();
        PessoaJuridica* getPrimeiro();
        PessoaJuridica* getUltimo();
        void setPrimeiro(PessoaJuridica* primeiro);
        void setUltimo(PessoaJuridica *ultimo);


};
#endif 