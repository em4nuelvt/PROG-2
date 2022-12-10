#include "ListaConsultas.hpp"
using namespace std;

int ListaConsultas::contador;


ListaConsultas::ListaConsultas(){
    contador=0;
    primeiro=NULL;
    ultimo=NULL;
}

ListaConsultas::~ListaConsultas(){
}

bool ListaConsultas::vazia(){
    return primeiro==NULL;
}

void ListaConsultas::cadastrarConsulta(ListaMedicos medicos, ListaPacientes pacientes){
    int dia,mes,ano;
    string hora;
    long cpfPaciente,crmMedico;
    Data data;
    Consulta* auxConsulta= new Consulta();
    Consulta* novo= new Consulta();

    if(pacientes.vazia()){
        cout<<"Cadastre um paciente."<<endl<<endl;
        return;
    }
    if(medicos.vazia()){
        cout<<"Cadastre um medico."<<endl<<endl;
        return; 
    }
    Paciente *aux;
    aux=pacientes.getPrimeiro();
    /* cout<<P->getNome()<<endl; */
    
    int valida=0;
    do{
        cout<<"Digite o cpf do paciente da consulta: ";
        cin>>cpfPaciente;
        while(aux){
            if(aux->getCpf()==cpfPaciente){
                valida++;
                break;
            }else{
                valida=0;
            }
            aux=aux->getProx();
        }
        if(valida==0){
            cout<<"Esse paciente não está cadastrado."<<endl<<endl;
        }
        aux=pacientes.getPrimeiro();
    }while(valida==0); 

    valida=0;
    Medico* medicoAux;
    medicoAux=medicos.getPrimeiro();
    do{
        cout<<"Digite o crm do medico da consulta: ";
        cin>>crmMedico;
        while(medicoAux){
            if(medicoAux->getCrm()==crmMedico){
                valida++;
                break;
            }else{
                valida=0;
            }
            medicoAux=medicoAux->getProx();
        }
        if(valida==0){
            cout<<"Esse medico não está cadastrado."<<endl<<endl;
        }
        medicoAux=medicos.getPrimeiro();
    }while(valida==0);
    do{
    cout<<"Digite o dia da consulta: ";
    cin>>dia;
    }while(dia>31||dia<0);

    do{
    cout<<"Digite o mês da consulta: ";
    cin>>mes;
    }while(mes>12|| mes<0);

    do{
    cout<<"Digite o ano da consulta: ";
    cin>>ano;
    }while(ano<0|| ano>2100);

    bool segue=false;
    auxConsulta=primeiro;
    do{
        cout<<"Digite a hora da consulta: ";
        setbuf(stdin,0);
        getline(cin,hora);
        if(vazia()){
            break;
        }

        while(auxConsulta){
            if(auxConsulta->getHora()==hora&&dia==auxConsulta->getData().getDia()&&mes==auxConsulta->getData().getMes()&&ano==auxConsulta->getData().getAno()){
                segue=false;
                break;  
            }else if(auxConsulta->getHora()==hora&&dia==auxConsulta->getData().getDia()&&mes==auxConsulta->getData().getMes()&&ano==auxConsulta->getData().getAno()&&crmMedico==auxConsulta->getCrm()){
                segue=false;
                break;  
            }else{
                segue=true;
            }
            auxConsulta=auxConsulta->getProx();
        }
        auxConsulta=primeiro;

    }while(segue==false);
    
    

    data.setDia(dia);
    data.setMes(mes);
    data.setAno(ano);

    novo->setCpf(cpfPaciente);
    novo->setData(data);
    novo->setHora(hora);
    novo->setCrm(crmMedico);
    
    

    if(vazia()){
        primeiro=novo;
        ultimo=primeiro;
        novo->setProx(NULL);
        cout<<"Consulta cadastrada!"<<endl<<endl;
        contador++;
        return;
    }
    

    ultimo->setProx(novo);
    ultimo=novo;
    novo->setProx(NULL);
    cout<<"Consulta cadastrada!"<<endl<<endl;
    contador++;
    return;


}

void ListaConsultas::removerConsulta(){
    if(!vazia()){
        bool controlador= false;
        long cpf;
        int dia,mes,ano;
        cout<<"Digite o cpf do paciente da consulta: " ;
        cin>>cpf;
        cout<<"Digite o dia da consulta: " ;
        cin>>dia;
        cout<<"Digite o mes da consulta: " ;
        cin>>mes;
        cout<<"Digite o ano da consulta: " ;
        cin>>ano;

        //se houver somente 1 elemento(medico)

        if(primeiro->getProx()==NULL&&primeiro->getCpf()==cpf&&primeiro->getData().getDia()==dia&&primeiro->getData().getMes()==mes&&primeiro->getData().getAno()==ano){
            contador--;
            controlador=true;
            primeiro=NULL;
            cout<<"Consulta removida! Caso 1"<<endl<<endl;
        }//se houver mais de 1 elemento
        else{
            Consulta* anterior=primeiro;
            Consulta* atual=primeiro->getProx();
            while(atual){
                if(anterior->getCpf()==cpf&&anterior->getData().getDia()==dia&&anterior->getData().getMes()==mes&&anterior->getData().getAno()==ano&&anterior==primeiro){
                    anterior->setProx(NULL);
                    primeiro=atual;
                    controlador=true;
                    contador--;
                    cout<<"Consulta removida! caso 2"<<endl<<endl;
                    return;
                }else if(atual->getCpf()==cpf&&atual->getData().getDia()==dia&&atual->getData().getMes()==mes&&atual->getData().getAno()==ano){
                    anterior->setProx(atual->getProx());
                    if(atual->getProx()==NULL){
                        ultimo=anterior;
                    }
                    atual->setProx(NULL);
                    delete atual;
                    controlador=true;
                    cout<<"Consulta removida! caso 3"<<endl<<endl;
                    contador--;
                    return;
                }
                if(anterior!=ultimo){
                    atual=atual->getProx();
                    anterior=anterior->getProx();
                }
            }
            if(controlador==false){
                cout<<"Consulta não encontrada..."<<endl<<endl;
            }

        }
    }else{
        cout<<"Lista vazia"<<endl<<endl;
    }

}

void ListaConsultas::imprimirConsultaEspecifica(ListaMedicos medicos, ListaPacientes pacientes){
    long cpf,crm;
    
    if(vazia()){
        cout<<"Nenhuma consulta..."<<endl;
        return;
    }

    cout<<"Digite o cpf do paciente:";
    cin>>cpf;

    cout<<"Digite o crm do médico: ";
    cin>>crm;
    cout<<endl;

    Medico* auxiliarM;
    Paciente* auxiliarP;
    auxiliarM=medicos.getPrimeiro();
    auxiliarP=pacientes.getPrimeiro();


    Consulta* aux=new Consulta();
    aux=primeiro;
    int controle=0;
    contador=1;

    while(aux){
        if(cpf==aux->getCpf()&&crm==aux->getCrm()){
            cout<<"Consulta " <<contador<<endl;
            cout<<"Data: "<<aux->getData().getDia()<<"/"<<aux->getData().getMes()<<"/"<<aux->getData().getAno()<<endl;
            cout<<"Hora: "<<aux->getHora()<<endl;
            controle++;

             while(auxiliarP){
                if(auxiliarP->getCpf()==cpf){
                    cout<<"Nome do paciente : "<<auxiliarP->getNome()<<endl;
                }
                auxiliarP=auxiliarP->getProx();
            }
            while(auxiliarM){
                if(auxiliarM->getCrm()==crm){
                    cout<<"Nome do médico: "<<auxiliarM->getNome()<<endl<<endl;
                }
                auxiliarM=auxiliarM->getProx();
            }
            
        }
        aux=aux->getProx();
    }
    if (controle==0){
        cout<<"Nenhuma consulta encontrada."<<endl<<endl;
    }

   /*  while(aux){
        cout<<"Consulta" <<contador<<endl;
        cout<<"Data: "<<aux->getData().getDia()<<"/"<<aux->getData().getMes()<<"/"<<aux->getData().getAno()<<endl;
        cout<<"Hora: "<<aux->getHora()<<endl;
        cout<<"CPF: "<<aux->getCpf()<<endl;
        aux=aux->getProx();
    } */
}

void ListaConsultas::imprimirConsultas(ListaMedicos medicos, ListaPacientes pacientes){
    Medico* auxiliarM;
    Paciente* auxiliarP;
    auxiliarM=medicos.getPrimeiro();
    auxiliarP=pacientes.getPrimeiro();

    if(vazia()){
        cout<<"Nenhuma consulta..."<<endl;
        return;
    }


    Consulta* aux=new Consulta();
    aux=primeiro;
    int controle=0;
    contador=1;

    while(aux){
        
        cout<<"Consulta " <<contador<<endl;
        cout<<"Data: "<<aux->getData().getDia()<<"/"<<aux->getData().getMes()<<"/"<<aux->getData().getAno()<<endl;
        cout<<"Hora: "<<aux->getHora()<<endl;
        contador++;
        controle++;

        while(auxiliarP){
            if(auxiliarP->getCpf()==aux->getCpf()){
                cout<<"Nome do paciente : "<<auxiliarP->getNome()<<endl;
            }
            auxiliarP=auxiliarP->getProx();
        }
        auxiliarP=pacientes.getPrimeiro();
        while(auxiliarM){
            if(auxiliarM->getCrm()==aux->getCrm()){
                cout<<"Nome do médico: "<<auxiliarM->getNome()<<endl<<endl;
            }
            auxiliarM=auxiliarM->getProx();
        }
        auxiliarM=medicos.getPrimeiro();

            
        
        aux=aux->getProx();
    }

}


