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
        while(true){
            cout<<"Digite uma opção: ";
            cin>>escolha;
            if(cin.fail()){
                cout<<"Digite um número válido!"<<endl;
                cin.clear();
                setbuf(stdin,0);
                continue;
            }
            else{
                break;
            }
        }   
        switch (escolha)
        {
        case 1:
            c.CadastrarAluno();
            break;
        case 2:
            c.CadastrarProfessor();
            break;
        case 3:
            c.CadastrarDisciplina();
            break;
        case 4:
            c.ImprimeAlunos();
            break;
        case 5:
            c.ImprimeProfessores();
            break;
        case 6:
            c.ImprimeDisciplinas();
            break;
        case 0:
            break;
        }

    }while(escolha!=0);
    return 0;
}