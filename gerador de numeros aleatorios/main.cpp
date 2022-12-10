#include <iostream>
#include <random>
using namespace std;
#include <fstream>
#include <vector>

int combustivelAleatorio(){
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(1,15);
    return dist(mt);
}

int nPassageirosAleatorio(){
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(0,200);
    return dist(mt);
}

string companhiaAereaAleatoria(){
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(1,4);

    if(dist(mt)==1){
        return "GOL";
    }

    else if(dist(mt)==2){
        return "AZUL";
    }

    else if(dist(mt)==3){
        return "LATAM";
    }

    else{
        return "American Airlines";
    }
    

}

int main(){

/*     cout<<"Digite o nome do arquivo de saída: ";
    string nomeSaida;
    cin>>nomeSaida;
    ofstream saida(nomeSaida.c_str());
    for(int i=0;i<1000;i++){
        saida<<companhiaAereaAleatoria()<<endl;
        saida<<combustivelAleatorio()<<endl;
        saida<<nPassageirosAleatorio()<<endl;
    } */

    cout<<"Digite o nome do arquivo de entrada: ";
    string nomeSaida;
    string companhia;
    string combustivel;
    string passageiros;
    cin>>nomeSaida;
    ifstream entrada(nomeSaida);
    string linha;
    vector <string> linhas;
    int i=0;

    while(getline(entrada,linha)){
        linhas.push_back(linha);
    }
    i=0;

    entrada.close();
    
    cout<<linhas[i]<<endl;
    i++;
    cout<<linhas[i]<<endl;
    i++;
    cout<<linhas[i]<<endl;
    i++;






 /*    while(getline(entrada,linhas[i])&&i<3){
        i++;
    }
    i=0;

    companhia=linhas[0];
    combustivel=linhas[1];
    passageiros=linhas[2];

    cout<<companhia<<endl;
    cout<<combustivel<<endl;
    cout<<passageiros<<endl; */

    

    
    return 0;
}