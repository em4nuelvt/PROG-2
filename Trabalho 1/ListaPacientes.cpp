#include "ListaPacientes.hpp"
#include <iostream>
using namespace std;

int ListaPacientes::contador;

ListaPacientes::ListaPacientes(){
    primeiro=NULL;
    ultimo=NULL;
    contador=0;
}

ListaPacientes::~ListaPacientes(){

}
bool ListaPacientes::vazia(){
    return primeiro==NULL;
}

void ListaPacientes::cadastrarPaciente(){
    string nome, endereco, telefone,identidade,especialidade,dataUltimaConsulta,medicacao;
    string relatar;
    char sexo;
    long cpf;
    int valida=0;
    

    cout<<"Digite o nome do paciente: ";
    setbuf(stdin,0);
    getline(cin,nome);

    Paciente *aux= new Paciente();
    aux=primeiro;
    do{
        cout<<"Digite o cpf do paciente: ";
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



    cout<<"Digite o endereco do paciente: ";
    setbuf(stdin,0);
    getline(cin,endereco);

    cout<<"Digite o telefone do paciente: ";
    setbuf(stdin,0);
    getline(cin,telefone);

    valida=0;
    aux=primeiro;
    do{
        cout<<"Digite a identidade do paciente: ";
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


    cout<<"Digite o relato do paciente: ";
    setbuf(stdin,0);
    getline(cin,relatar);

    cout<<"Digite a medicacao que o paciente toma: ";
    setbuf(stdin,0);
    getline(cin,medicacao);

    cout<<"Digite a data da ultima consulta (por extenso): ";
    setbuf(stdin,0);
    getline(cin,dataUltimaConsulta);

    bool control=false;

    while(control==false){
        cout<<"Digite o sexo do paciente: ";
        setbuf(stdin,0);
        sexo=getchar();

        if(sexo!='M'&&sexo!='m'&&sexo!='f'&&sexo!='F'){
            control=false;
        }else{
            control=true;
        }
    }

    
    Paciente *novo= new Paciente();
    novo->setCpf(cpf);
    novo->setNome(nome);
    novo->setEndereco(endereco);
    novo->setIdentidade(identidade);
    novo->setTelefone(telefone);
    novo->setSexo(sexo);
    novo->setMedicacao(medicacao);
    novo->setDataUltimaConsulta(dataUltimaConsulta);
    novo->setRelato(relatar);


    if(vazia()){
        primeiro=novo;
        ultimo=primeiro;
        novo->setProx(NULL);
        cout<<"Paciente cadastrado!"<<endl;
        contador++;
        return;
    }
    ultimo->setProx(novo);
    ultimo = novo;  
    contador++;
    return;

}

void ListaPacientes::imprimirDadosDoPaciente(){
    long cpf;
    if(vazia()){
        cout<<"Nenhum paciente..."<<endl;
        return;
    }
    cout<<"Digite o cpf do paciente que deseja consultar: ";
    cin>>cpf;
    

    Paciente* aux= new Paciente();
    aux=primeiro;
    bool controle = false;

    while(aux){
        if(aux->getCpf()==cpf){
            controle=true;
            cout<<endl<<"Nome: "<<aux->getNome()<<endl;
            cout<<"CPF: "<<aux->getCpf()<<endl;
            cout<<"Endereco: "<<aux->getEndereco()<<endl;
            cout<<"Identidade: "<<aux->getIdentidade()<<endl;
            cout<<"Telefone: "<<aux->getTelefone()<<endl;
            cout<<"Sexo: "<<aux->getSexo()<<endl;
            cout<<"Relato: "<<aux->getRelato()<<endl;
            cout<<"Medicacao: "<<aux->getMedicacao()<<endl;
            cout<<"Data ultima consulta: "<<aux->getDataUltimaConsulta()<<endl;
            return;
        }
        aux=aux->getProx();
    }
    if(controle==false){
        cout<<"Paciente não encontrado."<<endl;
    }
}

void ListaPacientes::imprimirListaDePacientes(){
    Paciente *aux= new Paciente();
    if(vazia()){
        cout<<"Nenhum paciente..."<<endl;
        return;
    }
    aux=primeiro;
    int cont=0;
    while(aux){
        cout<<cont<<"- "<<aux->getNome()<<endl;
        cont++;
        aux=aux->getProx();
    }

}
void ListaPacientes::removerPaciente(){
    if(!vazia()){
        bool controlador= false;
        long cpfAux;
        cout<<"Digite o cpf do paciente que deseja remover: " ;
        cin>>cpfAux;
        //se houver somente 1 elemento(paciente)

        if(primeiro->getProx()==NULL&&primeiro->getCpf()==cpfAux){
            contador--;
            controlador=true;
            primeiro=NULL;
            cout<<"Paciente removido no caso 1"<<endl;
        }//se houver mais de 1 elemento
        else{
            Paciente* anterior=primeiro;
            Paciente* atual=primeiro->getProx();
            while(atual){
                if(anterior->getCpf()==cpfAux&&anterior==primeiro){
                    anterior->setProx(NULL);
                    primeiro=atual;
                    controlador=true;
                    contador--;
                    cout<<"Paciente removido! caso 2"<<endl;
                    return;
                }else if(atual->getCpf()==cpfAux){
                    anterior->setProx(atual->getProx());
                    if(atual->getProx()==NULL){
                        ultimo=anterior;
                    }
                    atual->setProx(NULL);
                    delete atual;
                    controlador=true;
                    cout<<"Paciente removido! caso 3"<<endl;
                    contador--;
                    return;
                }
                if(anterior!=ultimo){
                    atual=atual->getProx();
                    anterior=anterior->getProx();
                }
            }
            if(controlador==false){
                cout<<"Paciente não encontrado..."<<endl;
            }

        }
    }else{
        cout<<"Lista vazia"<<endl;
    }
}

Paciente*ListaPacientes:: getPrimeiro(){
    return this->primeiro;
}
void ListaPacientes::setPrimeiro(Paciente* primeiro){
    this->primeiro=primeiro;
}