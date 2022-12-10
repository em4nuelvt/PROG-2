#ifndef BANCO_HPP
#define BANCO_HPP
#include <queue>
#include <vector>
#include "Pessoa.hpp"

struct compIdade{
    bool operator()(Pessoa &p1,Pessoa &p2){
        return p1.getIdade()<p2.getIdade();
    }
};
class Banco{
    private: 
        priority_queue<Pessoa,vector<Pessoa>,compIdade> P;
        priority_queue<Pessoa,vector<Pessoa>,compIdade> Paux;

    public:
        Banco();
        virtual ~Banco();

        void Inserir();
        void Remover();
        bool verificarVazia();
        void imprimir();

};





#endif