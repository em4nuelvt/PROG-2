
#ifndef __DISCIPLINA_HPP
#define __DISCIPLINA_HPP
#include "professor.hpp"
#include <iostream>

using namespace std;

class Disciplina{
    private:
        string nome;
        int ch;
        Professor *professor;
        Disciplina *prox;

    public:
        Disciplina();
        void setNome(string nome);
        void setCh(int ch);
        void setProfessor(Professor *professor);
        void setProx(Disciplina *prox);
        string getNome();
        int getCh();
        Professor *getProfessor();
        Disciplina *getProx();

};

#endif