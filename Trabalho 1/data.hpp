#ifndef _DATA_HPP
#define _DATA_HPP
#include <iostream>


class Data{
    private:
        int dia,mes,ano;
    public:
        Data();
        virtual ~Data();
        void setDia(int dia);
        void setMes(int mes);
        void setAno(int ano);

        int getDia();
        int getMes();
        int getAno();
};

#endif

