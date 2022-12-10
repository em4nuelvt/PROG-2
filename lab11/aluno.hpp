#ifndef ALUNO_HPP
#define ALUNO_HPP
#include "pessoa.hpp"

class Aluno: public Pessoa{
    private:
        int matricula;
    public:
        Aluno();
        int getMatricula();
        void setMatricula(int matricula);

};

#endif