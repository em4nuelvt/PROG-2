#ifndef _CONTA_CORRENTE_HPP
#define _CONTA_CORRENTE_HPP
#include "conta.hpp"
using namespace std;

class ContaCorrente: public Conta
{
private:
    ContaCorrente* prox;
public:
    ContaCorrente();
    virtual ~ContaCorrente();
    ContaCorrente* getProx();
    void setProx(ContaCorrente* prox);
};


#endif