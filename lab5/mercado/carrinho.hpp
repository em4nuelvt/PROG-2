#ifndef LISTA_HPP
#define LISTA_HPP
#include <iostream>
#include <string>
#include "produto.hpp"
using namespace std;


class Carrinho{
    private:
        Produto* primeiro;
        Produto* ultimo;
    public:
        //CONSTRUTORES
        Carrinho();
        Carrinho(int id,string nome, float valor, int quantidade );
        //VARIÁVEIS ESTÁTICAS
        static int cont;
        static float total;
        //DESTRUTOR
        virtual ~Carrinho();
        //MÉTODOS
        bool vazia();
        void mostrar();
        void inserirFim( );
        int tamanho();
        bool existe(int id);
        void remover();
        void modificarProduto();
        void consultarProduto();

};




#endif