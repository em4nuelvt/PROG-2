
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

    public:
        Disciplina();
        void setNome(string nome);
        void setCh(int ch);
        void setProfessor(Professor *professor);
        string getNome();
        int getCh();
        Professor* getProfessor();


};

#endif