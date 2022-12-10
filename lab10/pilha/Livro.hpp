#ifndef _LIVRO__HPP
#define _LIVRO__HPP
#include <iostream>
#include <string>
using namespace std;

class Livro{
    private:
        string nome;
        unsigned long isbn; 
        Livro* ant;
        Livro* prox;
    public:
        Livro();
        virtual ~Livro();

        void setNome(string nome);
        void setIsbn(unsigned long isbn);
        void setAnt(Livro* ant);
        void setProx(Livro* prox);

        string getNome();
        unsigned long getIsbn();
        Livro* getAnt();
        Livro* getProx();

        
};

#endif