#include "ListaContribuintes.hpp"
using namespace std;

ListaContribuintes::ListaContribuintes(){
    primeiro= NULL;
    ultimo=NULL;
}

ListaContribuintes::~ListaContribuintes(){

}
bool ListaContribuintes::vazia(){
    return primeiro==NULL;
}

void ListaContribuintes::cadastro(){
    string nome;
    int tipo;
    unsigned long long cpf;
    unsigned long long cnpj;
    float rendaBruta;
    float IR;

    Contribuinte* novo= new Contribuinte();


    while(true){
        cout<<endl<<"Selecione o tipo de cadastro:"<<endl;
        cout<<"1- Pessoa Fisica. "<<endl;
        cout<<"2- Pessoa Juridica. "<<endl;
        cout<<"Opção: ";
        cin>>tipo;
        if(cin.fail()){
            cout<<"Digite um número válido!"<<endl;
            cin.clear();
            setbuf(stdin,0);
            continue;
        }else if(tipo>2||tipo<1){
            cout<<"Digite um número válido!"<<endl;
            cin.clear();
            setbuf(stdin,0);
            continue;
        }
        else{
            break;
        }
    }

    cout<<"Digite o nome do contribuinte: ";
    setbuf(stdin, 0);
    getline(cin, nome);

    if(tipo == 1){
        while(true){
            cout<<"Insira o cpf do contribuinte:";
            cin>>cpf;
            if(cin.fail()){
                cout<<"Digite um número válido!"<<endl;
                cin.clear();
                setbuf(stdin,0);
                continue;
            }else if(cpf<0){
                cout<<"Digite um número válido!"<<endl;
                cin.clear();
                setbuf(stdin,0);
                continue;
            }
            else{
                break;
            }
        }
        while(true){
            cout<<"Insira a renda bruta do contribuinte:";
            cin>>rendaBruta;
            if(cin.fail()){
                cout<<"Digite um número válido!"<<endl;
                cin.clear();
                setbuf(stdin,0);
                continue;
            }else if(rendaBruta<0){
                cout<<"Digite um número válido!"<<endl;
                cin.clear();
                setbuf(stdin,0);
                continue;
            }
            else{
                break;
            }
        }
        IR= calculaIR(rendaBruta);

        novo->setCnpj(0);
        novo->setCpf(cpf);
        novo->setNome(nome);
        novo->setRendaBruta(rendaBruta);
        novo->setIR(IR);

    }else{
        while(true){
            cout<<"Insira o cnpj do contribuinte:";
            cin>>cnpj;
            if(cin.fail()){
                cout<<"Digite um número válido!"<<endl;
                cin.clear();
                setbuf(stdin,0);
                continue;
            }else if(cnpj<0){
                cout<<"Digite um número válido!"<<endl;
                cin.clear();
                setbuf(stdin,0);
                continue;
            }
            else{
                break;
            }
        }
        while(true){
            cout<<"Insira a renda bruta do contribuinte:";
            cin>>rendaBruta;
            if(cin.fail()){
                cout<<"Digite um número válido!"<<endl;
                cin.clear();
                setbuf(stdin,0);
                continue;
            }else if(rendaBruta<0){
                cout<<"Digite um número válido!"<<endl;
                cin.clear();
                setbuf(stdin,0);
                continue;
            }
            else{
                break;
            }
        }
        IR= rendaBruta*10/100;

        novo->setCnpj(cnpj);
        novo->setCpf(0);
        novo->setNome(nome);
        novo->setRendaBruta(rendaBruta);
        novo->setIR(IR);
    }

    if(vazia()){
        primeiro= novo;
        ultimo= primeiro;
        ultimo->setProx(NULL);
        return;
    }

    ultimo->setProx(novo);
    ultimo=novo;
    novo->setProx(NULL);
    return;

}

void ListaContribuintes::removeCnpj(){
    if(vazia()){
        cout<<"Lista vazia, cadastre um contribuinte primeiro"<<endl;
        return;
    }
    unsigned long long cnpj;
    bool controlador= false;

    while(true){
        cout<<"Insira o cnpj do contribuinte:";
        cin>>cnpj;
        if(cin.fail()){
            cout<<"Digite um número válido!"<<endl;
            cin.clear();
            setbuf(stdin,0);
            continue;
        }else if(cnpj<0){
            cout<<"Digite um número válido!"<<endl;
            cin.clear();
            setbuf(stdin,0);
            continue;
        }
        else{
            break;
        }
    }

    if(primeiro->getProx()==NULL &&primeiro->getCnpj()==cnpj){
        controlador= true;
        primeiro= NULL;
        cout<<"Contribuinte removido!"<<endl;
    }else{
        Contribuinte *anterior= primeiro;
        Contribuinte *atual= primeiro->getProx();

        while(atual){
            if(anterior->getCnpj()==cnpj){
                anterior->setProx(NULL);
                primeiro= atual;
                controlador= true;
                cout<<"Contribuinte removido! "<<endl;
                return;
            }else if(atual->getCnpj()==cnpj){
                anterior->setProx(atual->getProx());
                if(atual->getProx()==NULL){
                    ultimo= anterior;
                }
                atual->setProx(NULL);
                delete atual;
                controlador= true;
                cout<<"Contribuinte removido!"<<endl;
                return;
            }
            if(anterior!=ultimo){
                atual=atual->getProx();
                anterior=anterior->getProx();
            }
        }
        if(controlador==false){
            cout<<"Contribuinte não encontrado..."<<endl;
        }
        
    }


}

void ListaContribuintes::removeCpf(){
    if(vazia()){
        cout<<"Lista vazia, cadastre um contribuinte primeiro"<<endl;
        return;
    }
    unsigned long long cpf;
    bool controlador= false;

    while(true){
        cout<<"Insira o cpf do contribuinte:";
        cin>>cpf;
        if(cin.fail()){
            cout<<"Digite um número válido!"<<endl;
            cin.clear();
            setbuf(stdin,0);
            continue;
        }else if(cpf<0){
            cout<<"Digite um número válido!"<<endl;
            cin.clear();
            setbuf(stdin,0);
            continue;
        }
        else{
            break;
        }
    }

    if(primeiro->getProx()==NULL &&primeiro->getCpf()==cpf){
        controlador= true;
        primeiro= NULL;
        cout<<"Contribuinte removido!"<<endl;
    }else{
        Contribuinte *anterior= primeiro;
        Contribuinte *atual= primeiro->getProx();

        while(atual){
            if(anterior->getCpf()==cpf){
                anterior->setProx(NULL);
                primeiro= atual;
                controlador= true;
                cout<<"Contribuinte removido! "<<endl;
                return;
            }else if(atual->getCpf()==cpf){
                anterior->setProx(atual->getProx());
                if(atual->getProx()==NULL){
                    ultimo= anterior;
                }
                atual->setProx(NULL);
                delete atual;
                controlador= true;
                cout<<"Contribuinte removido!"<<endl;
                return;
            }
            if(anterior!=ultimo){
                atual=atual->getProx();
                anterior=anterior->getProx();
            }
        }
        if(controlador==false){
            cout<<"Contribuinte não encontrado..."<<endl;
        }

    }


}

float ListaContribuintes::calculaIR(float renda){
    if(renda<=1904.98){
        return 0;
    }else if(renda<=2826.65){
        return (renda*7.5/100)-142.80;
    }else if(renda<=3751.06){
        return (renda*15/100)-354.8;
    }else if(renda<=4664.68){
        return (renda*22.5/100)-636.13;
    }else{
        return (renda*27.5/100)-869.36;
    }
}

void ListaContribuintes::imprimeTodos(){
    Contribuinte* aux= new Contribuinte();
    aux= primeiro;

    while(aux){
        cout<<"Nome: "<<aux->getNome()<<endl;
        cout<<"Imposto de Renda a pagar: R$"<<aux->getIR();
        cout<<endl<<endl;

        aux= aux->getProx();
    }
}

void ListaContribuintes::consultaFisica(){
    unsigned long long cpf;
    while(true){
        cout<<"Insira o cpf do contribuinte:";
        cin>>cpf;
        if(cin.fail()){
            cout<<"Digite um número válido!"<<endl;
            cin.clear();
            setbuf(stdin,0);
            continue;
        }else if(cpf<=0){
            cout<<"Digite um número válido!"<<endl;
            cin.clear();
            setbuf(stdin,0);
            continue;
        }
        else{
            break;
        }
    }
    Contribuinte* aux= new Contribuinte();
    aux= primeiro;

    while(aux){
        if(aux->getCpf()==cpf){
            cout<<"Nome: "<<aux->getNome()<<endl;
            cout<<"Imposto de renda a pagar: R$"<<aux->getIR();
            cout<<endl<<endl;
            return;
        }
        aux=aux->getProx();
    }
    cout<<"Contribuinte não encontrado."<<endl<<endl;


    
}

void ListaContribuintes::consultaJuridica(){
    unsigned long long cnpj;
    while(true){
        cout<<"Insira o cnpj do contribuinte:";
        cin>>cnpj;
        if(cin.fail()){
            cout<<"Digite um número válido!"<<endl;
            cin.clear();
            setbuf(stdin,0);
            continue;
        }else if(cnpj<=0){
            cout<<"Digite um número válido!"<<endl;
            cin.clear();
            setbuf(stdin,0);
            continue;
        }
        else{
            break;
        }
    }
    Contribuinte* aux= new Contribuinte();
    aux= primeiro;

    while(aux){
        if(aux->getCnpj()==cnpj){
            cout<<"Nome: "<<aux->getNome()<<endl;
            cout<<"Imposto de renda a pagar: R$"<<aux->getIR();
            cout<<endl<<endl;
            return;
        }
        aux=aux->getProx();
    }
    cout<<"Contribuinte não encontrado."<<endl<<endl;


    
}