#ifndef _PESSOA_HPP
#define _PESSOA_HPP
#include <bits/stdc++.h>
using namespace std;

class Pessoa{
    private:
        string nome;
        long cpf;
        Pessoa* prox;
    
    public:
        Pessoa();
        virtual ~Pessoa();
        void setNome(string nome);
        void setCpf(long cpf);
        string getNome();
        long getCpf();

        void setProx(Pessoa* prox);
        Pessoa* getProx();


};
#endif