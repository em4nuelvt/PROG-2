#include "curso.hpp"
#include <iostream>

using namespace std;

Curso::Curso(){
    this->disciplinas=new ListaDisciplinas();
    this->alunos=new ListaAlunos();
    this->professores=new ListaProfessor();
}

Curso::~Curso(){

}

void Curso::ChamaCadastrarProfessor(){
    professores->inserir();
}
void Curso:: ChamaCadastrarAluno(){
    alunos->inserirFim();
}
void Curso::ChamaCadastrarDisciplina(){
    disciplinas->inserirFim();
}
void Curso::ChamaImprimeDisciplinas(){
    disciplinas->imprimeDisciplinas();
}
void Curso::ChamaImprimeAlunos(){
    alunos->imprime();
}
void Curso::ChamaImprimeProfessores(){
    professores->imprime();
}