#include "Fila.hpp"
using namespace std;

int main(){
    Fila F;
    int escolha;

    do{
        cout<<"------------------MENU------------------"<<endl;
        cout<<"1- Inserir pessoa na fila"<<endl;
        cout<<"2- Retirar pessoa da fila"<<endl;
        cout<<"3- Imprimir fila"<<endl;
        cout<<"4- Atendimento prioritario"<<endl;
        cout<<"5- Verificar se é vazia"<<endl;
        cout<<"0- Sair"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<endl;
        while(true){
            cout<<"Digite uma opção: ";
            cin>>escolha;
            if(cin.fail()){
                cout<<"Digite um número válido!"<<endl;
                cin.clear();
                setbuf(stdin,0);
                continue;
            }else{
                break;
            }
        }


        switch (escolha)
        {
        case 1:
            F.inserir();
            break;
        case 2:
            F.remover();
            break;
        case 3:
            F.imprimir();
            break;
        case 4:
            F.adtendimentoPrioritario();
            break;
        case 5:
            cout<<F.vazia()<<endl;
            break;        
        case 0:
            break;
        }
    }while(escolha!=0);
    return 0;
}