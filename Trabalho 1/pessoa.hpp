#ifndef _PESSOA_HPP
#define _PESSOA_HPP
#include <iostream>
#include <string>
using namespace std;

class Pessoa{

    protected:
        string nome, endereco, telefone,identidade;
        char sexo;
        long cpf;
    public:
        Pessoa();
        virtual~Pessoa();
        void setNome(string nome);
        void setSexo(char sexo);
        void setEndereco(string endereco);
        void setCpf(long cpf);
        void setTelefone(string telefone);
        void setIdentidade(string identidade);
        string getNome();
        string getEndereco();
        string getTelefone();
        string getIdentidade();
        char getSexo();
        long getCpf();

        
};




#endif