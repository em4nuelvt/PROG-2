#ifndef PRODUTO_HPP
#define PRODUTO_HPP
#include <string>
#include <iostream>

using namespace std;

class Produto{
    private:
        int id;
        string nome;
        float valor;
        int quantidade;
        Produto* prox;

    public:


        //construtores
        Produto();
        Produto(int id, string nome, float valor,int quantidade);

        //getters e setters
        void setID(int id);
        int obterID();
        void setNome(string nome);
        string obterNome();
        void setValor(float valor);
        float obterValor();
        void setQuantidade(int quantidade);
        int obterQuantidade();

        //controle dos nós
        Produto* obterProx();
        void setProx(Produto* p);
};

#endif