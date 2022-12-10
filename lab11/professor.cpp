#include "professor.hpp"
#include <iostream>
using namespace std;

Professor::Professor(){
}

void Professor::setTitulacao(string titulacao){
    this->titulacao=titulacao;
}

string Professor::getTitulacao(){
    return this->titulacao;
}

void Professor::setCurso(string curso){
    this-> curso=curso;
}

string Professor::getCurso(){
    return this->curso;
}

