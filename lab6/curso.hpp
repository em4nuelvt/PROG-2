#ifndef __CURSO__HPP
#define __CURSO__HPP
#include "listaAlunos.hpp"
#include "listaDisciplinas.hpp"
#include "listaProfessor.hpp"
#include <iostream>
using namespace std;

class Curso{
    private:
        string nome;
        ListaDisciplinas *disciplinas;
        ListaAlunos *alunos;
        ListaProfessor *professores;

    public:
        Curso();
        virtual ~Curso();
        void ChamaCadastrarProfessor();
        void ChamaCadastrarAluno();
        void ChamaCadastrarDisciplina();
        void ChamaImprimeDisciplinas();
        void ChamaImprimeAlunos();
        void ChamaImprimeProfessores();

};

#endif