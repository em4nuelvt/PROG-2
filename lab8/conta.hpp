#ifndef __CONTA_HPP 
#define __CONTA_HPP
#include <bits/stdc++.h>
#include "ListaTransacoes.hpp"
#include "ExcecaoLimite.hpp"

using namespace std;

class Conta{
    protected:
        int numero;
        string nome;
        float saldo;
        ListaTransacoes* transacoes;
    public:
        Conta();
        virtual ~Conta();   
        void setNumero(int numero);
        void setNome(string nome);
        void setSaldo(float saldo);
        void setProx();

        int getNumero();
        string getNome();
        float getSaldo();

        ListaTransacoes* getListaTransacoes();
        void setListaTransacoes(ListaTransacoes* transacoes);


};

#endif