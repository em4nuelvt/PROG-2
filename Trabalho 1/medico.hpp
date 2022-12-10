#ifndef _MEDICO_HPP
#define _MEDICO_HPP
#include "pessoa.hpp"
#include <iostream>

class Medico:public Pessoa{

    private:
        long crm;
        string especialidade;
        Medico* prox;

    public:
        Medico();
        virtual ~Medico();
        void setCrm(long crm);
        void setEspecialidade(string especialidade);
        void setProx(Medico *prox);

        Medico* getProx();
        long getCrm();
        string getEspecialidade();

};

#endif