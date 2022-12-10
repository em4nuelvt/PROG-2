#ifndef _CONTRIBUINTE_HPP
#define _CONTRIBUINTE_HPP

#include "PessoaFisica.hpp"
#include "PessoaJuridica.hpp"

class Contribuinte: public PessoaFisica, public PessoaJuridica{
    private:
        int tipo; //1-Fisica 2-Juridica
        Contribuinte* prox;
    public:
        Contribuinte();
        virtual ~Contribuinte();
        Contribuinte* getProx();
        void setProx(Contribuinte* prox);

};
#endif