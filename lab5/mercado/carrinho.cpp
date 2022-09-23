#include <iostream>
#include <string>
#include "carrinho.hpp"
#include "produto.hpp"

using namespace std;

//INICIANDO AS VARIÁVEIS ESTÁTICAS
int Carrinho::cont =0;
float Carrinho::total=0;

Carrinho::Carrinho(){///construtor vazio
    primeiro=NULL;
    ultimo=NULL;
}
Carrinho::Carrinho(int id, string nome, float valor, int quantidade){//construtor passando valor
    primeiro = new Produto(id,nome,valor,quantidade);
    ultimo=primeiro;

    cont++;
    total=valor*quantidade;
}

Carrinho::~Carrinho(){//destrutor
    delete primeiro;
}

bool Carrinho::vazia(){ //verifica se a lista está vazia
    return primeiro==NULL;
}

void Carrinho::mostrar(){//imprime o nome de todos os produtos
    cout << "Imprimindo todos os produtos"<<endl;
    Produto*c= primeiro;

    if (vazia()){
        return;
    }
    do{
        cout<< c->obterNome()<<"("<<c->obterQuantidade()<<")"<<endl;
        c=c->obterProx();
    }while(c);

    cout<<endl;
    return;     
}

void Carrinho::inserirFim(){//insere produto no fim do carrinho
    int id;
    string nome;
    float valor;
    int quantidade;

    cout<<"Digite o código do produto: ";
    cin>>id;

    cout<<"Digite o nome do produto: ";
    setbuf(stdin,0);
    getline(cin,nome);

    cout<<"Digite o valor do produto: ";
    cin>>valor;

    cout<<"Digite a quantidade desejada: ";
    cin>>quantidade;

    
    Produto* novo= new Produto(id,nome,valor,quantidade);
    if(vazia()){
        primeiro=novo;
        ultimo=primeiro;
        cont++;
        total=total+(quantidade*valor);
        return;
    }
    ultimo->setProx(novo);
    ultimo=novo;
    cont++;
    total=total+(quantidade*valor);
}

int Carrinho::tamanho(){ //retorna o tamanho da lista 
    if (vazia()){
        return 0;
    }
    else{
        int tam =0;
        Produto*atual= primeiro;

        while(atual){
            tam++;
            atual= atual->obterProx();
        }
        return tam;    
    }
    

}

bool Carrinho::existe(int v){
    Produto *atual= primeiro;
    while(atual){
        if (atual->obterValor()==v)
            return true;
        atual= atual->obterProx();    
    }
    return false;
}
void Carrinho::remover()//remoção do final
{
    if(!vazia()){
        bool controlador=false;
        string nomeAux;
        cout<<"Digite o nome do produto que deseja remover: ";
        setbuf(stdin,0);
        getline(cin,nomeAux);
        //se houver somente 1 elemento
        if(primeiro->obterProx()==NULL&&primeiro->obterNome()==nomeAux){
            cont--;//diminuindo um no contador estático de elementos da lista
            total=total-primeiro->obterValor()*primeiro->obterQuantidade();//diminuindo o valor do produto removido do carrinho
            controlador=true;
            primeiro=NULL;
        } 
        //se houver + de 1 elemento
        else{
            Produto* anterior=primeiro;
            Produto*atual=anterior->obterProx();
            while(atual){ 
                if(anterior->obterNome()==nomeAux&&anterior==primeiro){
                    total=total-(anterior->obterValor()*anterior->obterQuantidade());//diminuindo o valor do produto removido do carrinho
                    anterior->setProx(NULL);
                    primeiro=atual;
                    controlador==true;
                    cout<<"Produto removido com sucesso!!!"<<endl;
                    cont--;//diminuindo um no contador estático de elementos da lista
                    return;
                }else if(atual->obterNome()==nomeAux){
                    total=total-(atual->obterValor()*atual->obterQuantidade());//diminuindo o valor do produto removido do carrinho
                    anterior->setProx(atual->obterProx());
                    if(atual->obterProx()==NULL){
                        ultimo=anterior;
                    }
                    atual->setProx(NULL);
                    delete atual;
                    controlador=true;
                    cout<<"Produto removido com sucesso!!!"<<endl;
                    cont--;//diminuindo um no contador estático de elementos da lista
                    return;
                }
                if(anterior!=ultimo){
                    atual=atual->obterProx();
                    anterior=anterior->obterProx();
                }
            }
            if (controlador==false){
                cout<<"Produto não encontrado"<<endl;
            }
        }
    }else{
        cout<<"Carrinho vazio, insira um produto :)"<<endl;
    }
    
}
void Carrinho::modificarProduto(){
    Produto* atual= primeiro;
    int idAux;
    string nomeAux,nome;
    float valorAux;
    int qntdAux;
    int contador=0;
    if(vazia()){
        cout<<"A lista está vazia, cadastre um produto antes... "<<endl;
        return;
    }
    cout<<"Digite o nome do produto que deseja alterar: ";
    setbuf(stdin,0);
    getline(cin,nome);

    while(atual){
        if(atual->obterNome()==nome){
            total=total-(atual->obterQuantidade() * atual->obterValor());
            cout<<"Atualize o id do produto: ";
            cin>>idAux;
            atual->setID(idAux);

            cout<<"Atualize o nome do produto: ";
            setbuf(stdin,0);
            getline(cin,nomeAux);
            atual->setNome(nomeAux);

            cout<<"Atualize o valor do produto: ";
            cin>>valorAux;
            atual->setValor(valorAux);

            cout<<"Atualize a quantidade deste produto: ";
            cin>>qntdAux;
            atual->setQuantidade(qntdAux);
            
            contador++;

            total=total+(qntdAux*valorAux);
            cout<<"Produto atualizado!!!  :)"<<endl;
            return;
        }
        atual=atual->obterProx();
    }
    if(contador==0){
        cout<<"Produto não encontrado... "<<endl;
    }
    return;     
}
void Carrinho::consultarProduto(){
    string nomeAux;
    Produto* atual=primeiro;
    bool controlador=false;
    if(vazia()){
        cout<<"A lista está vazia ... "<<endl;
        return;
    }
    cout<<"Digite o nome do produto que deseja buscar: ";
    setbuf(stdin,0);
    getline(cin,nomeAux);

    while(atual){
        if(atual->obterNome()==nomeAux){

            cout<<"Produto encontrado"<<endl;
            cout<<"Nome do produto: "<<atual->obterNome()<<endl;
            cout<<"Código do produto: "<<atual->obterID()<<endl;
            cout<<"Valor unitário: "<<atual->obterValor()<<endl;
            cout<<"Quantidade: "<<atual->obterQuantidade()<<endl;
            controlador=true;
            return;
        }
        atual= atual->obterProx();
    }
    if(controlador==false){
        cout<<"Produto não encontrado..."<<endl;
    }
}