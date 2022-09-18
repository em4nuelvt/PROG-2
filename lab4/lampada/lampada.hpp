#ifndef __LAMPADA_HPP
#define __LAMPADA_HPP
#include <string>

using namespace std;

class Lampada
{
private:
    string modelo;
    string tensao;
    int estado;
    

public:
    static int cont;
    Lampada(string modelo, string tensao, int estado);
    void setModelo(string modelo);
    void setTensao(string tensao);
    void setEstado(int estado);
    string getModelo();
    string getTensao();
    int getEstado();
    void mudarEstado();
    void desligar();
    void ligar();
    
    

};


#endif