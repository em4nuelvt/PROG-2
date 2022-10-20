#include <iostream>
#include "curso.hpp"
using namespace std;

int main(){
    Curso c;

    int escolha;

    do{
        cout<<"--------------MENU-------------"<<endl;
        cout<<"1-Cadastrar aluno"<<endl;
        cout<<"2-Cadastrar professor"<<endl;
        cout<<"3-Cadastrar disciplina"<<endl;
        cout<<"4-Imprimir alunos"<<endl;
        cout<<"5-Imprimir professores"<<endl;
        cout<<"6-Imprimir disciplinas"<<endl;
        cout<<"0-Sair"<<endl;
        cout<<"--------------------------------"<<endl;
        cout<<"Digite uma opção: ";
        cin>>escolha;

        switch (escolha)
        {
        case 1:
            c.ChamaCadastrarAluno();
            break;
        case 2:
            c.ChamaCadastrarProfessor();
            break;
        case 3:
            c.ChamaCadastrarDisciplina();
            break;
        case 4:
            c.ChamaImprimeAlunos();
            break;
        case 5:
            c.ChamaImprimeProfessores();
            break;
        case 6:
            c.ChamaImprimeDisciplinas();
            break;
        case 0:
            break;
        }

    }while(escolha!=0);
    return 0;
}