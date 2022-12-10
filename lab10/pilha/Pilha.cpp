#include "Pilha.hpp"

int Pilha::cont;
Pilha::Pilha(){
    topo=NULL;
    cont=0;
}

Pilha::~Pilha(){}

bool Pilha::vazia(){
    return topo==NULL;
}

void Pilha::inserir(){
    string nome;
    unsigned long isbn;

    Livro* aux= new Livro();

    cout<<"Digite o nome do livro para adicionar à pilha: ";
    setbuf(stdin,0);
    getline(cin,nome);

    while(true){
        cout<<"Digite o ISBN: ";
        cin>>isbn;
        if(cin.fail()){
            cout<<"Digite um número válido!"<<endl;
            cin.clear();
            setbuf(stdin,0);
            continue;
        }else{
            break;
        }
    }

    aux->setIsbn(isbn);
    aux->setNome(nome);
    cont++;

    if(vazia()){
        topo=aux;
        topo->setProx(NULL);
        topo->setAnt(NULL);
        cout<<"Livro adicionado a pilha..."<<cont<<" livros adicionados à pilha até agora."<<endl;
        return;
    }

    aux->setAnt(topo);
    topo->setProx(aux);
    topo=aux;
    topo->setProx(NULL);
    cout<<"Livro adicionado a pilha..."<<cont<<" livros adicionados à pilha até agora."<<endl;
    return; 
}

void Pilha::imprimirTopo(){
    if(vazia()){
        cout<<"A pilha não tem livros. "<<endl;
        return;
    }
    cout<<"Topo: "<<endl<<"Nome: "<<topo->getNome()<<endl<<"ISBN: "<<topo->getIsbn()<<endl;
    return;
}

void Pilha::remover(){
    if(vazia()){
        cout<<"Vazia..."<<endl;
        return;
    }
    cont--;
    if(topo->getAnt()==NULL){
        delete topo;
        topo=NULL;
        cout<<"Ultimo livro removido da pilha, ainda restam "<<cont<<" livros."<<endl;
        return;

    }
    topo=topo->getAnt();
    topo->setProx(NULL);

    cout<<"Ultimo livro removido da pilha, ainda restam "<<cont<<" livros."<<endl;
    return;
}

