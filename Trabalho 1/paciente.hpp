#ifndef _PACIENTE_HPP
#define _PACIENTE_HPP
#include "pessoa.hpp"

class Paciente:public Pessoa{
    private:
        string relato;
        string dataUltimaConsulta;
        string medicacao;
        Paciente* prox;

    public:
        Paciente();
        virtual ~Paciente();
        void setRelato(string relato);
        string getRelato();

        void setDataUltimaConsulta(string datataUltimaConsulta);
        string getDataUltimaConsulta();

        void setMedicacao(string medicacao);
        string getMedicacao();

        Paciente* getProx();
        void setProx(Paciente* prox);

};
#endif
