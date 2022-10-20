#ifndef TRANSACAO_HPP
#define TRANSACAO_HPP
#include <bits/stdc++.h>

using namespace std;

class Transacao{
    private:
        string data,descricao;
        float valor;
        Transacao* prox;
    public:
        Transacao();
        virtual ~Transacao();

        string getData();
        string getDescricao();
        float getValor();
        Transacao* getProx();

        void setData(string data);
        void setDescricao(string descricao);
        void setValor(float valor);
        void setProx(Transacao* prox);
};
#endif