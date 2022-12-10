#ifndef __PILHA__HPP
#define __PILHA__HPP
#include "Livro.hpp"

class Pilha{
    private: 
        Livro* topo;
    public:
        static int cont;
        Pilha();
        virtual ~Pilha();

        void remover();
        void inserir();
        bool vazia();
        void imprimirTopo();


};

#endif