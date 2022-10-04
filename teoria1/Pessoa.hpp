#ifndef __PESSOA_HPP
#define __PESSOA_HPP
#include <string>
#include <iostream>

using namespace std;

class Pessoa{
    protected:
        string nome;
        string endereco;
    public:
        Pessoa();
        virtual ~Pessoa();
        void setNome(string nome);
        void setEndereco(string endereco);

        string getNome();
        string getEndereco();

};


#endif