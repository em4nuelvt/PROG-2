#include "Banco.hpp"

int main(){
    int escolha;
    Banco b;

    do{
        cout<<"------Menu-------"<<endl;
        cout<<"1-Inserir"<<endl;
        cout<<"2-Remover"<<endl;
        cout<<"3-Vazia? "<<endl;
        cout<<"4-Imprimir fila"<<endl;
        cout<<"0-Sair"<<endl;
        cout<<"-----------------"<<endl;
        while(true){
            cout<<"Digite um opção: "<<endl;
            cin>>escolha;
            if(cin.fail()||escolha<0||escolha>4){
                cout<<"Digite um número válido!!!"<<endl;
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
            b.Inserir();
            break;
        case 2:
            b.Remover();
            break;
        case 3:
            b.verificarVazia();
            break;
        case 4: 
            b.imprimir();
            break;
        case 0:
            break;
        
        }

    }while(escolha!=0);
}