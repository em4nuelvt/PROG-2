#include "Banco.hpp"

Banco::Banco(){

}
Banco::~Banco(){

}

void Banco::Inserir(){
    int idade;
    string nome;
    Pessoa aux;

    cout<<"Digite o nome da pessoa: ";
    setbuf(stdin,0);
    getline(cin,nome);

    while(true){
        cout<<"Digite a idade da pessoa: ";
        cin>>idade;
        if(cin.fail()){
            cout<<"Insira um número válido!!!!"<<endl;
            cin.clear();
            setbuf(stdin,0);
            continue;
        }else{
            break;
        }
    }
    aux.setIdade(idade);
    aux.setNome(nome);

    P.push(aux);

}
void Banco::Remover(){
    cout<<"A fila andou..."<<endl;
    Pessoa aux=P.top();
    cout<<aux.getNome()<<"saiu da fila"<<endl;
    P.pop();
}
bool Banco::verificarVazia(){
    return P.empty();
}
void Banco::imprimir(){
    Paux=P;
    Pessoa aux;

    while(!Paux.empty()){
        aux=Paux.top();
        cout<<"Nome: "<<aux.getNome()<<endl;
        cout<<"Idade: "<<aux.getIdade()<<endl;
        Paux.pop();
    }
}