#include "ListaMedicos.hpp"
#include <iostream>
#include <string>

using namespace std;

int ListaMedicos::contador;

ListaMedicos::ListaMedicos(){
    primeiro=NULL;
    ultimo=NULL;
    contador =0;

}

ListaMedicos::~ListaMedicos(){
    
}

bool ListaMedicos::vazia(){
    return primeiro==NULL;
}

void ListaMedicos::cadastraMedico(){
    string nome, endereco, telefone,identidade,especialidade;
    char sexo;
    long cpf,crm;
    int valida=0;
    

    cout<<"Digite o nome do médico: ";
    setbuf(stdin,0);
    getline(cin,nome);

    Medico *aux= new Medico();
    aux=primeiro;
    do{
        cout<<"Digite o cpf do médico: ";
        cin>>cpf;

        while(aux){
            if(aux->getCpf()==cpf){
                valida++;
                cout<<"O cpf informado já está cadastrado."<<endl;
                break;
            }else{
                valida=0;
            }
            aux=aux->getProx();
        }
        
        
    }while(valida!=0);

    valida =0;
    aux=primeiro;
    do{
        cout<<"Digite o crm do médico: ";
        cin>> crm;

        while(aux){
            if(aux->getCrm()==crm){
                valida++;
                cout<<"O crm informado já está cadastrado."<<endl;
                break;
            }else{
                valida=0;
            }
            aux=aux->getProx();
        }
    }while(valida!=0);

    cout<<"Digite o endereco do médico: ";
    setbuf(stdin,0);
    getline(cin,endereco);

    cout<<"Digite o telefone do médico: ";
    setbuf(stdin,0);
    getline(cin,telefone);

    valida=0;
    aux=primeiro;
    do{
        cout<<"Digite a identidade do médico: ";
        setbuf(stdin,0);
        getline(cin,identidade);
        while(aux){
            if(aux->getIdentidade()==identidade){
                valida++;
                cout<<"A identidade informada já está cadastrada"<<endl;
                break;
            }else{
                valida=0;
            }
            aux=aux->getProx();
        }
           
    }while(valida!=0);



    bool control=false;

    while(control==false){
        cout<<"Digite o sexo do medico: ";
        cin>>sexo;

        if(sexo!='M'&&sexo!='m'&&sexo!='f'&&sexo!='F'){
            control=false;
        }else{
            control=true;
        }
    }


    cout<<"Digite a especialidade do médico: ";
    cin.ignore();
    getline(cin,especialidade);
    
    Medico *novo= new Medico();
    novo->setCpf(cpf);
    novo->setCrm(crm);
    novo->setNome(nome);
    novo->setEndereco(endereco);
    novo->setEspecialidade(especialidade);
    novo->setIdentidade(identidade);
    novo->setTelefone(telefone);
    novo->setSexo(sexo);

    if(vazia()){
        primeiro=novo;
        ultimo=primeiro;
        novo->setProx(NULL);
        cout<<"Medico cadastrado!"<<endl;
        contador++;
        return;
    }
    ultimo->setProx(novo);
    ultimo = novo;  
    contador++;
    return;

}

void ListaMedicos::removerMedico(){
    if(!vazia()){
        bool controlador= false;
        long crmAux;
        cout<<"Digite o crm do médico que deseja remover: " ;
        cin>>crmAux;
        

        if(primeiro->getProx()==NULL&&primeiro->getCrm()==crmAux){
            contador--;
            controlador=true;
            primeiro=NULL;
            cout<<"Medico removido no cAso 1"<<endl;
        }
        else{
            Medico* anterior=primeiro;
            Medico* atual=primeiro->getProx();
            while(atual){
                if(anterior->getCrm()==crmAux&&anterior==primeiro){
                    anterior->setProx(NULL);
                    primeiro=atual;
                    controlador=true;
                    contador--;
                    cout<<"Medico removido! caso 2"<<endl;
                    return;
                }else if(atual->getCrm()==crmAux){
                    anterior->setProx(atual->getProx());
                    if(atual->getProx()==NULL){
                        ultimo=anterior;
                    }
                    atual->setProx(NULL);
                    delete atual;
                    controlador=true;
                    cout<<"Medico removido! caso 3"<<endl;
                    contador--;
                    return;
                }
                if(anterior!=ultimo){
                    atual=atual->getProx();
                    anterior=anterior->getProx();
                }
            }
            if(controlador==false){
                cout<<"Médico não encontrado..."<<endl;
            }

        }                    
    }else{
        cout<<"Lista vazia"<<endl;
    }
}

void ListaMedicos::imprimirDados(){
    long crm;

    if(vazia()){
        cout<<"Nenhum medico..."<<endl;
        return;
    }

    cout<<"Digite o crm do médico que deseja consultar dados: ";
    cin>>crm;

    

    Medico* aux=new Medico();
    aux=primeiro;

    while(aux){
        if(aux->getCrm()==crm){
            cout<<"Nome: "<<aux->getNome()<<endl;
            cout<<"CPF: "<<aux->getCpf()<<endl;
            cout<<"CRM: "<<aux->getCrm()<<endl;
            cout<<"Endereco: "<<aux->getEndereco()<<endl;
            cout<<"Especialidade: "<<aux->getEspecialidade()<<endl;
            cout<<"Sexo: "<<aux->getSexo()<<endl;
            cout<<"Telefone: "<<aux->getTelefone()<<endl;
            cout<<"Identidade: "<<aux->getIdentidade()<<endl;
        }
        aux=aux->getProx();
    }
}
void ListaMedicos::imprimirTodos(){
    Medico* aux=new Medico();
    aux= primeiro;
    int cont=1;
    if(vazia()){
        cout<<"Nenhum medico..."<<endl;
        return;
    }

    while(aux){
        cout<<cont<<": "<<aux->getNome()<<"  crm: "<<aux->getCrm()<<"  cpf: "<<aux->getCpf()<<endl<<endl;
        cont++;
        aux=aux->getProx();
    }
}

Medico* ListaMedicos::getPrimeiro(){
    return this->primeiro;
}