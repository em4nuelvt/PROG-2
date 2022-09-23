#include <iostream>
#include <string>
#include "produto.hpp"
#include "carrinho.hpp"

using namespace std;

int main(){
    Carrinho cart;
    int escolha;
    do{

        cout<<"---------------------------Carrinho de compras----------------------------"<<endl;
        cout<<"1-Inserir produto"<<endl;
        cout<<"2-Consultar um produto"<<endl;
        cout<<"3-Mostrar todos os produtos"<<endl;
        cout<<"4-Remover produto"<<endl;
        cout<<"5-Modificar um produto"<<endl;
        cout<<"0-Sair"<<endl<<endl;
        cout<<"Número de produtos no carrinho: "<<cart.cont<<endl;
        cout<<"Total da compra: R$"<<cart.total<<endl;
        cout<<"--------------------------------------------------------------------------"<<endl;
        cout<<"Digite a opção desejada: ";
        cin>>escolha;


        switch(escolha){
            case 1:
                cart.inserirFim();
                break;
            case 2:
                cart.consultarProduto();
                break;
            case 3:
                cart.mostrar();
                break;
            case 4:
                cart.remover();
                break;
            case 5:
                cart.modificarProduto();
                break;
            case 0:
                cout<<"Finalizando compra. Muito Obrigado, até logo!  :)"<<endl;
                break;
        }
    }while (escolha!=0);

    return 0;
}