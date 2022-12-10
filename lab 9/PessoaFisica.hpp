#ifndef _PESSOA_FISICA_HPP
#define _PESSOA_FISICA_HPP
#include "Pessoa.hpp"

class PessoaFisica: public virtual Pessoa{
    protected:
        unsigned long long cpf;
    public:
        PessoaFisica();
        virtual ~PessoaFisica();
        unsigned long long getCpf();
        void setCpf(unsigned long long cpf);

};
#endif