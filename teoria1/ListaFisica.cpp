#include "ListaFisica.hpp"

#include <iostream>

using namespace std;

ListaFisica::ListaFisica(){
    primeiro=NULL;
    ultimo=NULL;
}

ListaFisica::~ListaFisica(){

}
bool ListaFisica::vazia(){
    return primeiro==NULL;
}


void ListaFisica::insere(){
    string nomeAux;
    string enderecoAux;
    string cpfAux;

    cout<<"Digite o nome: ";
    setbuf(stdin,0);
    getline(cin,nomeAux);

    cout<<"Digite o endereco: ";
    setbuf(stdin,0);
    getline(cin,enderecoAux);

    cout<<"Digite o cpf: ";
    setbuf(stdin,0);
    getline(cin,cpfAux);

    PessoaFisica* novo= new PessoaFisica();
    novo->setNome(nomeAux);
    novo->setEndereco(enderecoAux);
    novo->setCpf(cpfAux);
    if(vazia()){
        primeiro=novo;
        ultimo=primeiro;
        novo->setProx(NULL);
        return;
    }
    ultimo->setProx(novo);
    ultimo=novo;
    return;
}

void ListaFisica::imprime(){
    PessoaFisica* aux=primeiro;
    int cont =1;
    while(aux){
        cout<<cont<<": "<<aux->getNome()<<endl;
        cont ++;
        aux=aux->getProx();
    }

}

void ListaFisica::associa(ListaJuridica *lista){
    PessoaJuridica* auxJ= lista->getPrimeiro();
    PessoaFisica *auxF=  primeiro;
    string cpfAUX;
    string cnpjJaux;
    int contador=0;
    int contador2=0;

    if(vazia()){
        cout<<"Nenhuma pessoa física foi cadastrada"<<endl;
        return; 
    }
    if (lista->vazia()){
        cout<<"Nenhuma pessoa jurídica foi cadastrada"<<endl;
        return;
    }
    cout<<"Digite o cpf: ";
    setbuf(stdin,0);
    getline(cin, cpfAUX);
    while(auxF){
        if(auxF->getCpf()==cpfAUX){
            cout<<"Digite o cnpj: ";
            setbuf(stdin,0);
            getline(cin,cnpjJaux);
            while(auxJ){
                if(auxJ->getCnpj()==cnpjJaux){
                    cout<<auxJ->getCnpj();
                    ListaJuridica* listaJ= new ListaJuridica();
                    listaJ=auxF->getListaJ();
                    if(listaJ->vazia()){
                        listaJ->setPrimeiro(auxJ);
                        listaJ->setUltimo(auxJ);
                        auxJ->setProx(NULL);
                        cout<<"Associação realizada"<<endl;
                        return;
                    }
                    auxF->getListaJ()->getUltimo()->setProx(auxJ);
                    auxF->getListaJ()->setUltimo(auxJ);
                    auxF->getListaJ()->getUltimo()->setProx(NULL);
                    cout<<"Associação realizada";
                }else{
                    contador2++;
                }
                auxJ=auxJ->getProx();
            }
            if(contador2!=0){
                cout<<("Pessoa Juridica não encontrada ");
            }
            
            contador=0;
            break; 
        }else{
            contador++;
        }
        auxF=auxF->getProx();
    }
    if (contador!=0){
        cout<<"Pessoa física não encontrada."<<endl;
    }
}

void  ListaFisica::imprimeAssociacoes(){
    PessoaFisica* aux= new PessoaFisica();
    aux=primeiro;
    /* ListaJuridica* ListaJAux= new ListaJuridica(); */
    PessoaJuridica* auxJ=new PessoaJuridica();
    while(aux){
        if(aux->getListaJ()->getPrimeiro()){
            auxJ=aux->getListaJ()->getPrimeiro();
            cout<<"CNPJs Associados a "<<aux->getNome()<<endl;
            while (auxJ)
            {
             cout<<"Nome Fantasia: "<<auxJ->getNome()<<"CNPJ: "<<auxJ->getCnpj()<<endl;   
             auxJ=auxJ->getProx();   
            }
            
        }
        aux= aux->getProx();
    }
}

