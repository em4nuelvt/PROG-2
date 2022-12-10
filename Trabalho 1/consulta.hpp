#ifndef _CONSULTA_HPP 
#define _CONSULTA__HPP
#include <string>
#include <iostream>
#include "data.hpp"
using namespace std;

class Consulta{
    private:
        Data data;
        string hora;
        long cpf,crm;
        Consulta* prox;
    public:
        Consulta();
        virtual ~Consulta();
        void setData(Data data);
        void setHora(string hora);
        void setCpf(long cpf);
        void setCrm(long crm);
        Data getData();
        string getHora();
        long getCpf();
        long getCrm();
        void setProx(Consulta* prox);
        Consulta* getProx();
};

#endif