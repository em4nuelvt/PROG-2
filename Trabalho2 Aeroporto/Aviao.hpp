#ifndef AVIAO_HPP
#define AVIAO_HPP
#include <iostream>
#include <string>
using namespace std;

class Aviao{
    private: 
        unsigned int id;
        string companhiaAerea;
        int nPassageiros;
        int combustivel;
        Aviao* prox;

    public:
        Aviao();
        virtual ~Aviao();
        static int contadorUniversalPar;
        static int contadorUniversalImpar;
        int getId();
        int getNPassageiros();
        int getCombustivel();
        string getCompanhiaAerea();
        Aviao* getProx();

        void setId(int id);
        void setNPassageiros( int nPassageiros);
        void setCombustivel( int combustivel);
        void setCompanhiaAerea(string companhiaAerea);
        void setProx(Aviao* prox);
        friend bool operator<(const Aviao& p1, const Aviao& p2){
            return p1.combustivel > p2.combustivel;
        }




};
#endif