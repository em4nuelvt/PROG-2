#ifndef _PESSOA_HPP
#define _PESSOA_HPP
#include <bits/stdc++.h>
using namespace std;

class Pessoa{
    protected:
        string nome;
        float rendaBruta;
        float IR;
    
    public:
        Pessoa();
        virtual ~Pessoa();
        void setNome(string nome);
        void setRendaBruta(float rendaBruta);
        void setIR(float IR);

        string getNome();
        float getRendaBruta();
        float getIR();

};
#endif