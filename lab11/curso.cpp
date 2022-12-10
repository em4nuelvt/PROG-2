#include "curso.hpp"
#include <iostream>

using namespace std;

Curso::Curso(){
}

Curso::~Curso(){

}

void Curso::CadastrarProfessor(){
    string nomeAux;
    string enderecoAux;
    string titulacaoAux;
    string cursoAux;

    cout<<"Digite o nome do professor: ";
    setbuf(stdin,0);
    getline(cin,nomeAux);

    cout<<"Digite o endereco do professor: ";
    setbuf(stdin,0);
    getline(cin,enderecoAux);

    cout<<"Digite a titulaçao do professor: ";
    setbuf(stdin,0);
    getline(cin,titulacaoAux);

    cout<<"Digite o curso do professor: ";
    setbuf(stdin,0);
    getline(cin,cursoAux);

    Professor aux;
    aux.setEndereco(enderecoAux);
    aux.setTitulacao(titulacaoAux);
    aux.setNome(nomeAux);
    aux.setCurso(cursoAux);

    professores.push_back(aux);

}
void Curso:: CadastrarAluno(){
    string nomeAux;
    string enderecoAux;
    int matriculaAux;

    cout<<"Digite o nome do aluno: ";
    setbuf(stdin,0);
    getline(cin,nomeAux);

    cout<<"Digite o endereco do aluno: ";
    setbuf(stdin,0);
    getline(cin,enderecoAux);

    while(true){
        cout<< "Digite o numero de matrícula do aluno: ";
        cin>>matriculaAux;
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
    Aluno aux;
    aux.setNome(nomeAux);
    aux.setEndereco(enderecoAux);
    aux.setMatricula(matriculaAux);
    alunos.push_back(aux);
}
void Curso::CadastrarDisciplina(){
    string nomeAux;
    int chAux;
    string nomeProfessor;
    string enderecoProfessor;
    string titulacaoProfessor;
    string cursoProfessor;
    bool temProf=false;
    Disciplina aux;

    if(professores.empty()){
        cout<<"é preciso cadastrar um professor"<<endl;
        return;
    }

    cout<<"Digite o nome do professor responsável: ";
    setbuf(stdin,0);
    getline(cin,nomeProfessor);

    for(int i=0; i<professores.size();i++){
        if(professores[i].getNome()==nomeProfessor){
            enderecoProfessor=professores[i].getEndereco();
            titulacaoProfessor=professores[i].getTitulacao();
            cursoProfessor= professores[i].getCurso();
            temProf=true;
            break;
        }
    }
    if(temProf==false){
        cout<<"Professor não encontrado "<<endl;
        return;
    }

    Professor *auxProf=new Professor();
    auxProf->setCurso(cursoProfessor);
    auxProf->setEndereco(enderecoProfessor);
    auxProf->setNome(nomeProfessor);
    auxProf->setTitulacao(titulacaoProfessor);


    cout<<endl<<"TESTE: "<<auxProf->getNome()<<endl;
    aux.setProfessor(auxProf);

    cout<<"Digite o nome da disciplina: ";
    setbuf(stdin,0);
    getline(cin,nomeAux);

    while(true){
        cout<<"Digite a carga horária da disciplina: ";
        cin>>chAux;
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
    
    aux.setNome(nomeAux);
    aux.setCh(chAux);
    disciplinas.push_back(aux);

}
void Curso::ImprimeDisciplinas(){
    Disciplina* ponteiro= new Disciplina();
    cout<<"Iprimindo disciplinas: "<<endl;
    for(int i=0;i<disciplinas.size();i++){
        ponteiro=&disciplinas[i];
        cout<<"Nome da disciplina: "<<disciplinas[i].getNome()<<endl;
        cout<<"Carga horária: "<<disciplinas[i].getCh()<<endl;
        cout<<"Professor responsável: "<<ponteiro->getProfessor()->getNome()<<endl<<endl;
    }
}
void Curso::ImprimeAlunos(){
    cout<<"Imprimindo Alunos: "<<endl;
    for(int i=0; i<alunos.size();i++){

        cout<<"Nome: "<<alunos[i].getNome()<<endl;
        cout<<"Matricula: "<<alunos[i].getMatricula()<<endl;
        cout<<"Endereco: "<<alunos[i].getEndereco()<<endl<<endl;

    }
}
void Curso::ImprimeProfessores(){
    cout<<"Imprimindo Professores"<<endl;
    for(int i=0;i<professores.size();i++){
        cout<<"Nome: "<<professores[i].getNome()<<endl;
        cout<<"Titulação: "<< professores[i].getTitulacao()<<endl;
        cout<<"Curso: "<<professores[i].getCurso()<<endl;
        cout<<"Endereço: "<<professores[i].getEndereco()<<endl<<endl;
    }
}