#ifndef _CORRENTE_LIMITE_HPP
#define _CORRENTE_LIMITE_HPP
#include "conta.hpp"
class CorrenteLimite: public Conta{
    private:
        float limite;
        CorrenteLimite* prox;
    public:
        CorrenteLimite();
        virtual ~CorrenteLimite();
        void setLimite(float limite);
        float getLimite();
        void setProx(CorrenteLimite *prox);
        CorrenteLimite* getProx();
};
#endif