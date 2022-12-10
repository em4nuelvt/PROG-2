#ifndef _CONTA_POPUAPNCA_HPP
#define _CONTA_POPUAPNCA_HPP
#include "conta.hpp"

using namespace std;
class ContaPoupanca: public Conta{
    private:
        int dia;
        ContaPoupanca *prox;
    public:
        ContaPoupanca();
        virtual ~ContaPoupanca();
        void setDia(int dia);
        int getDia();

        void setProx(ContaPoupanca *prox);
        ContaPoupanca* getProx();
        
};

#endif