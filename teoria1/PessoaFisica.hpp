#ifndef __PESSOA_FISICA_HPP
#define __PESSOA_FISICA_HPP
#include "Pessoa.hpp"
#include "ListaJuridica.hpp"
#include <iostream>

using namespace std;


class PessoaFisica: public Pessoa{

    private:
        string cpf;
        PessoaFisica* prox;
        ListaJuridica* cnpjs;

    public:
        PessoaFisica();
        virtual ~PessoaFisica();
        void setCpf(string cpf);
        void setProx(PessoaFisica* prox);
        string getCpf();
        PessoaFisica* getProx();
        ListaJuridica* getListaJ();
        

};

#endif