#include <iostream>
#include "ListaFisica.hpp"
#include "ListaJuridica.hpp"

using namespace std;

int main(){
    int escolha;
    ListaFisica* LF=new ListaFisica();
    ListaJuridica* LJ=new ListaJuridica();
    

    do{
        cout<<"-------------MENU--------------"<<endl;
        cout<<"1- Cadastrar Pessoa Física"<<endl;
        cout<<"2- Cadastrar Pessoa Jurídica"<<endl;
        cout<<"3- Imprimir Pessoas Físicas"<<endl;
        cout<<"4- Imprimir Pessoas Jurídicas"<<endl;
        cout<<"5- Associar CNPJ a CPF"<<endl;
        cout<<"6- Imprimir lista de associações"<<endl;
        cout<<"0- Sair"<<endl;
        cout<<"-------------------------------"<<endl;
        cout<<"Escolha uma opção: ";
        cin>>escolha;

        switch(escolha){
            case 1:
                LF->insere();
                break;
            case 2:
                LJ->insere();
                break;
            case 3:
                LF->imprime();
                break;
            case 4:
                LJ->imprime();
                break;
            case 5:
                LF->associa(LJ);
                break;
            case 6:
                LF->imprimeAssociacoes();
                break;
            case 0:
                break;    
        }
    }while(escolha!=0);

    return 0;
}