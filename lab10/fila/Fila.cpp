#include "Fila.hpp"

int Fila::cont;
int Fila::contPrioridade;


Fila::Fila(){
    primeiro=NULL;
    ultimo=NULL;
    cont=0;
}

Fila::~Fila(){}

bool Fila::vazia(){
    return primeiro==NULL;
}

void Fila::inserir(){
    long cpf;
    string nome;

    cout<<"Digite o nome: ";
    setbuf(stdin,0);
    getline(cin,nome);

    while(true){
        cout<<"Digite o CPF: ";
        cin>>cpf;
        if(cin.fail()){
            cout<<"Digite um número válido!"<<endl;
            cin.clear();
            setbuf(stdin,0);
            continue;
        }else{
            break;
        }
    }


    Pessoa* aux= new Pessoa();

    aux->setNome(nome);
    aux->setCpf(cpf);
    aux->setProx(NULL);

    if(vazia()){
        primeiro= aux;
        ultimo= primeiro;
        ultimo->setProx(NULL);
        cout<<nome<<" agora está na fila. Há "<<cont<<" pessoas a frente na fila"<<endl;
        cont++;
        return;
    }
    ultimo->setProx(aux);
    ultimo=aux;
    ultimo->setProx(NULL);
    cout<<nome<<" agora está na fila. Há "<<cont<<" pessoas a frente na fila"<<endl;
    cont++;
    
    return;
    
}

void Fila::imprimir(){
    cout<<"Imprimindo as pessoas na fila"<<endl;
    int contador=1;

    Pessoa* aux= new Pessoa();
    aux=primeiro;

    while(aux){
        cout<<contador<<"- "<<aux->getNome()<<endl;
        aux= aux->getProx();
        contador++;
    }

}

void Fila::remover(){
    if(vazia()){
        cout<<"Vazia..."<<endl;
        return;
    }
    Pessoa* aux= new Pessoa();
    aux= primeiro;
    primeiro=aux->getProx();
    aux->setProx(NULL);
    delete aux;
    cont--;
    cout<<"A fila andou... 1 pessoa a menos pra esperar :)"<<endl<<"Restam  "<<cont<<endl;
    
}

/* void Fila::adtendimentoPrioritario(){
    Pessoa* anterior= new Pessoa();
    Pessoa* atual= new Pessoa();
    long cpf;
    while(true){
        cout<<"Digite o cpf: ";
        cin>>cpf;
        if(cin.fail()){
            cout<<"Digite um número válido!"<<endl;
            cin.clear();
            setbuf(stdin,0);
            continue;
        }else{
            break;
        }
    }
    bool controlador = false;
    if(vazia()){
        cout<<"Fila vazia"<<endl;
        return;
    }
    if(primeiro->getProx()==NULL&&primeiro->getCpf()==cpf){
        cont--;
        cout<<primeiro->getNome()<<" foi atendido, restam "<<cont<<" pessoas na fila"<<endl;
        controlador=true;
        primeiro=NULL;
        
    }//se houver mais de 1 elemento
    else{
        Pessoa* anterior=primeiro;
        Pessoa* atual=primeiro->getProx();
        while(atual){
            if(anterior->getCpf()==cpf&&anterior==primeiro){
                cont--;
                anterior->setProx(NULL);
                primeiro=atual;
                controlador=true;
                cout<<anterior->getNome()<<" foi atendido, restam "<<cont<<" pessoas na fila"<<endl;
                return;
            }else if(atual->getCpf()==cpf){
                cont--;
                cout<<atual->getNome()<<" foi atendido, restam "<<cont<<" pessoas na fila"<<endl;
                anterior->setProx(atual->getProx());
                if(atual->getProx()==NULL){
                    ultimo=anterior;
                }
                atual->setProx(NULL);
                delete atual;
                controlador=true;
                return;
            }
            if(anterior!=ultimo){
                atual=atual->getProx();
                anterior=anterior->getProx();
            }
        }
        if(controlador==false){
            cout<<"Pessoa não está na fila..."<<endl;
        }
    }
} */

void Fila::adtendimentoPrioritario(){
    string nome;
    long cpf;

    Pessoa* aux= new Pessoa();

    cout<<"Digite o nome da pessoa: ";
    setbuf(stdin,0);
    getline(cin,nome);

    while(true){
        cout<<"Digite o CPF: ";
        cin>>cpf;
        if(cin.fail()){
            cout<<"Digite um número válido!"<<endl;
            cin.clear();
            setbuf(stdin,0);
            continue;
        }else{
            break;
        }
    }

    aux->setCpf(cpf);
    aux->setNome(nome);

    if(vazia()){
        aux->setProx(NULL);
        primeiro=aux;
        ultimo=primeiro;
        cout<<"Pessoa inserida na fila com prioridade..."<<endl;
        cont++;
        return;
    }
    aux->setProx(primeiro);
    primeiro=aux;
    cout<<"Pessoa inserida na fila com prioridade..."<<endl;
    cont++;
    return;




}