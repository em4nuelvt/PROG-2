#ifndef PESSOA_HPP
#define PESSOA_HPP
#include <string>
#include<iostream>

using namespace std;

class Pessoa{
    protected:
        string nome;
        string endereco;
    public:
        Pessoa();
        void setNome(string nome);
        string getNome();

        void setEndereco(string endereco);
        string getEndereco();

};
#endif