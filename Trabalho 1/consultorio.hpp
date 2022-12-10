#ifndef _CONSULTORIO_HPP
#define _CONSULTORIO_HPP
#include "ListaConsultas.hpp"
#include "ListaMedicos.hpp"
#include "ListaPacientes.hpp"

using namespace std;


class Consultorio{
    private:
        string nome;
        string endereco;
        int telefone;
        ListaMedicos* medicos;
        ListaPacientes* pacientes;
        ListaConsultas* consultas;

    public:
        Consultorio();
        virtual ~Consultorio();
        void cadastraMedico();
        void cadastraPaciente();
        void cadastraConsulta();
        void imprimirDadosMedico();
        void imprimirListaMedicos();
        void imprimirDadosPaciente();
        void imprimirListaPacientes();
        void imprimirConsultas();
        void imprimirConsultaEspecifica();
        void removerMedico();
        void removerPaciente();
        void removerConsulta();
        void setNome(string nome);
        void setEndereco(string endereco);
        void setTelefone(int telefone);
};
#endif