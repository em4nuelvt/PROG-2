#include "Livro.hpp"
#include "Pilha.hpp"

using namespace std;

int main(){
    Pilha P;
    int escolha;

    do{
        cout<<"------------------MENU------------------"<<endl;
        cout<<"1- Inserir Livro na pilha"<<endl;
        cout<<"2- Retirar Livro da pilha"<<endl;
        cout<<"3- Imprimir ultimo da pilha"<<endl;
        cout<<"4- Verificar se está vazia"<<endl;
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
            P.inserir();
            break;
        case 2:
            P.remover();
            break;
        case 3:
            P.imprimirTopo();
            break;
        case 4:
            if(P.vazia())
                cout<<"Vazia..."<<endl;
            else
                cout<<"Não está vazia..."<<endl;
            
            break;        
        case 0:
            break;
        }
    }while(escolha!=0);
    return 0;
}