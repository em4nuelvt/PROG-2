#include <bits/stdc++.h>
#include "ListaContribuintes.hpp"
int main(){
    int escolha;
    ListaContribuintes L;

    do{
        cout<<"-----------------Menu----------------"<<endl;
        cout<<"1- Cadastro"<<endl;
        cout<<"2- Remover Pessoa Física"<<endl;
        cout<<"3- Remover Pessoa Juridica"<<endl;
        cout<<"4- Listar todos IR "<<endl;
        cout<<"5- Consultar Pessoa Física"<<endl;
        cout<<"6- Consultar Pessoa Juridica"<<endl;
        cout<<"0- Sair"<<endl;
        cout<<"-------------------------------------"<<endl<<endl;
        while(true){
            cout<<"Escolha uma opção: ";
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
            L.cadastro();
            break;
        case 2:
            L.removeCpf();
            break;
        case 3:
            L.removeCnpj();
            break;
        case 4:
            L.imprimeTodos();
            break;
        case 5:
            L.consultaFisica();
            break;
        case 6:
            L.consultaJuridica();
            break;
        
        case 0:
            break;
        }
    }while(escolha!=0);
    
    return 0;
}