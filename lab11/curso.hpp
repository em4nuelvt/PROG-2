#ifndef __CURSO__HPP
#define __CURSO__HPP
#include "aluno.hpp"
#include "disciplina.hpp"
#include "professor.hpp"
#include "curso.hpp"
#include <vector>
#include <iostream>
using namespace std;

class Curso{
    private:
        vector<Professor> professores;
        vector<Disciplina> disciplinas;
        vector<Aluno> alunos;


    public:
        Curso();
        virtual ~Curso();
        void CadastrarProfessor();
        void CadastrarAluno();
        void CadastrarDisciplina();
        void ImprimeDisciplinas();
        void ImprimeAlunos();
        void ImprimeProfessores();

};

#endif