#ifndef _PESSOA_JURIDICA_HPP
#define _PESSOA_JURIDICA_HPP
#include "Pessoa.hpp"

class PessoaJuridica: public virtual Pessoa{
    protected:
        unsigned long long cnpj;
    public:
        PessoaJuridica();
        virtual~ PessoaJuridica();
        unsigned long long getCnpj();
        void setCnpj(unsigned long long cnpj);

};
#endif