#include <iostream>
using namespace std;
#include "consultorio.hpp"

int main(){
    int escolha,telefone;
    string nome, endereco;
    Consultorio c;

/*     cout<<endl<<"Insira o nome do consultório: ";
    setbuf(stdin,0);
    getline(cin,nome);

    cout<<endl<<"Insira o endereço do consultório: ";
    setbuf(stdin,0);
    getline(cin,endereco);

    cout<<endl<<"Insira o telefone do consultório: ";
    cin>>telefone;

    c.setEndereco(endereco);
    c.setTelefone(telefone);
    c.setNome(nome); */

    

    do{
        cout<<"----------------MENU-----------------"<<endl;
        cout<<"1- Cadastrar Medico"<<endl;
        cout<<"2- Cadastrar Paciente"<<endl;
        cout<<"3- Cadastrar consulta"<<endl;
        cout<<"4- Imprimir dados do médico"<<endl;
        cout<<"5- Imprimir lista de médicos"<<endl;
        cout<<"6- Imprimir lista de pacientes"<<endl;
        cout<<"7- Imprimir dados de um paciente"<<endl;
        cout<<"8- Imprimir lista de consultas"<<endl;
        cout<<"9- Imprimir informações de uma consulta"<<endl;
        cout<<"10- Remover Médico"<<endl;
        cout<<"11- Remover paciente"<<endl;
        cout<<"12- Remover consulta"<<endl;
        cout<<"0- Sair"<<endl;
        cout<<"-------------------------------------"<<endl;
        cout<<"Insira a opção:";
        cin>>escolha;
        cout<<"-------------------------------------"<<endl;
        
        switch(escolha){
            case 1:
                c.cadastraMedico();
                break;
            case 2:
                c.cadastraPaciente();
                break;
            case 3:
                c.cadastraConsulta();
                break;
            case 4:
                c.imprimirDadosMedico();
                break;
            case 5:
                c.imprimirListaMedicos();
                break;
            case 6:
                c.imprimirListaPacientes();
                break;
            case 7:
                c.imprimirDadosPaciente();
                break;
            case 8:
                c.imprimirConsultas();
                break;
            case 9:
                c.imprimirConsultaEspecifica();
                break;
            case 10:
                c.removerMedico();
                break;
            case 11:
                c.removerPaciente();
                break;
            case 12:
                c.removerConsulta();
                break;
            case 0:
                break;
        }
    } while (escolha!=0); 
    return 0;
}