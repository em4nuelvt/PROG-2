#ifndef __LISTA_PROFESSOR_HPP
#define __LISTA_PROFESSOR_HPP
#include "professor.hpp"
#include <iostream>

using namespace std;

class ListaProfessor
{
private:
    Professor* primeiro;
    Professor* ultimo;
public:
    ListaProfessor();
    virtual ~ListaProfessor();
    bool vazia();
    void imprime();
    void inserir();
};




#endif