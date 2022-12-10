#ifndef PESSOA_HPP
#define PESSOA_HPP
#include <iostream>
#include <string>
using namespace std;
class Pessoa{
    private:
        int idade;
        string nome;
    public:
        Pessoa();
        virtual ~Pessoa();
        int getIdade();
        string getNome();

        void setNome(string nome);
        void setIdade(int idade);
};
#endif