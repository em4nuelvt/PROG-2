#include <bits/stdc++.h>
#include "ListaCorrente.hpp"
#include "ListaCorrenteLimite.hpp"
#include "ListaPoupanca.hpp"

using namespace std;

int main(){

    ListaLimite LM;
    ListaCorrente LC;
    ListaPoupanca LP;
    int escolha;

    do{
        cout<<endl<<endl<<"----------------Banco-----------------"<<endl<<endl;
        cout<<"1-Cadastro de Conta Corrente"<<endl;
        cout<<"2-Cadastro de Conta Corrente com Limite"<<endl;
        cout<<"3-Cadastro de Conta Poupança"<<endl;
        cout<<"4-Depósito em Conta Corrente comum"<<endl;
        cout<<"5-Depósito em Conta Corrente com limite"<<endl;
        cout<<"6-Depósito em Conta Poupança"<<endl;
        cout<<"7-Saque em Conta Corrente Comum"<<endl;
        cout<<"8-Saque em Conta Corrente com limite"<<endl;
        cout<<"9-Saque em Conta Poupança"<<endl;
        cout<<"10-Imprime extrato (Corrente comum)"<<endl;
        cout<<"11-Imprime extrato (Corrente com limite)"<<endl;
        cout<<"12-Imprime extrato (Poupança)"<<endl;
        cout<<"0-Sair"<<endl;
        cout<<"---------------------------------------"<<endl;
        
        cout<<endl<<"Escolha uma opção: ";
        cin>>escolha;
        cout<<endl<<endl;

        switch (escolha)
        {
        case 1:
            LC.cadastra();
            break;
        case 2:
            LM.cadastra();
            break;
        case 3:
            LP.cadastra();
            break;
        case 4:
            LC.deposito();
            break;
        case 5:
            LM.deposito();
            break;
        case 6:
            LP.deposito();
            break;
        case 7:
            LC.saque();
            break;
        case 8:
            LM.saque();
            break;
        case 9:
            LP.saque();
            break;
        case 10:
            LC.imprimeExtrato();
            break;
        case 11:
            LM.imprimeExtrato();
            break;
        case 12:
            LP.imprimeExtratoP();
            break;
        case 0:
            return 0;
        }

    }while(escolha!=0);
    return 0;
}