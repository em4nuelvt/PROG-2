#ifndef ALUNO_HPP
#define ALUNO_HPP
#include "pessoa.hpp"

class Aluno: public Pessoa{
    private:
        int matricula;
        Aluno *prox;
    public:
        Aluno();
        int getMatricula();
        void setMatricula(int matricula);

        void setProx(Aluno* prox);
        Aluno *getProx();
};

#endif