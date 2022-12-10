#include "consultorio.hpp"
using namespace std;

Consultorio::Consultorio(){
    this->medicos= new ListaMedicos();
    this-> pacientes=new ListaPacientes();
    this-> consultas=new ListaConsultas();
}

Consultorio::~Consultorio(){

}

void Consultorio::cadastraMedico(){
    medicos->cadastraMedico();
    return;
}
void Consultorio::cadastraPaciente(){
    pacientes->cadastrarPaciente();
    return;
}

void Consultorio::cadastraConsulta(){
    consultas->cadastrarConsulta(*medicos,*pacientes);
    return;
}

void Consultorio::imprimirDadosMedico(){
    medicos->imprimirDados();
    return;
}
void Consultorio::imprimirListaMedicos(){
    medicos->imprimirTodos();
    return;
}
void Consultorio::imprimirDadosPaciente(){
    pacientes->imprimirDadosDoPaciente();
    return;
}

void Consultorio::imprimirListaPacientes(){
    pacientes->imprimirListaDePacientes();
    return;
}

void Consultorio::imprimirConsultas(){
    consultas->imprimirConsultas(*medicos,*pacientes);
    return;
}

void Consultorio::imprimirConsultaEspecifica(){
    consultas->imprimirConsultaEspecifica(*medicos,*pacientes);
    return;
}
void Consultorio::removerMedico(){
    medicos->removerMedico();
    return;
}
void Consultorio::removerPaciente(){
    pacientes->removerPaciente();
}
void Consultorio::removerConsulta(){
    consultas->removerConsulta();
}


void Consultorio::setEndereco(string endereco){
    this-> endereco= endereco;
}
void Consultorio::setNome(string nome){
    this-> nome= nome;
}
void Consultorio::setTelefone(int telefone){
    this-> telefone= telefone;
}