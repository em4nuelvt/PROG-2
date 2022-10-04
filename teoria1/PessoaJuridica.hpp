#ifndef __PESSOA_JURIDICA_HPP
#define __PESSOA_JURIDICA_HPP
#include "Pessoa.hpp"
#include <iostream>

using namespace std;


class PessoaJuridica: public Pessoa{

    private:
        string cnpj;
        PessoaJuridica* prox;
    public:
        PessoaJuridica();
        virtual ~PessoaJuridica();
        void setCnpj(string cnpj);
        void setProx(PessoaJuridica* prox);

        string getCnpj();
        PessoaJuridica* getProx();

};

#endif