#ifndef _LISTA_TRANSACOES_HPP
#define _LISTA_TRANSACOES_HPP

#include "transacao.hpp"

class ListaTransacoes{
    private:
        Transacao* primeiro;
        Transacao* ultimo;
    public:
        ListaTransacoes();
        virtual ~ListaTransacoes();
        bool vazia();
        void insere(float valor);
        void imprime();
        Transacao* getPrimeiro();
        Transacao* getUltimo();
        void setPrimeiro(Transacao* primeiro);
        void setUltimo(Transacao* ultimo);

};
#endif