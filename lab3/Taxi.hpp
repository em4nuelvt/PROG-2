#ifndef TAXI_HPP   
#define TAXI_HPP
#include <string>

using namespace std;

class Taxi{
    private:
        string modelo;
        string motorizacao;
        string fabricante;
        string nome; 
        float kmi;
        float kmf;

    public:
    
    string getNome();
    void setNome(string nome);

    string getModelo();
    void setModelo(string modelo);

    string getMotorizacao();
    void setMotorizacao(string motorizacao);

    string getFabricante();
    void setFabricante(string fabricante);

    float getKmi();
    void setKmi(float kmi);

    float getKmf();
    void setKmf(float kmf);

    void imprimir();        

};

#endif