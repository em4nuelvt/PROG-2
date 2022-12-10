#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP
#include <iostream>
#include "pessoa.hpp"
using namespace std;

class Professor: public Pessoa{
    private: 
        string titulacao;
        string curso;

    public:
        Professor();
        void setTitulacao(string titulacao);
        string getTitulacao();  

        void setCurso(string curso);
        string getCurso();


};


#endif