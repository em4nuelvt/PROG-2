#include <stdexcept>
#include <iostream>
#ifndef EXCECAO_LIMITE_HPP
#define EXCECAO_LIMITE_HPP

using namespace std;

class ExcecaoLimite: public runtime_error{
    public:
        ExcecaoLimite();
};


#endif