#ifndef __TRIANGULO_HPP
#define __TRIANGULO_HPP
#include <string>
using namespace std;

class Triangulo{
    private:
        float lado1;
        float lado2;
        float lado3;

    public:
        static int cont;
        Triangulo(float lado, float lado2, float lado3);
        Triangulo();
        void setLado1(float lado1);
        float getLado1();

        void setLado2(float lado2);
        float getLado2();

        void setLado3(float lado3);
        float getLado3();

        void verificarLados(float lado1, float lado2, float lado3);

        void caracterizaTriangulo(float lado1, float lado2, float lado3);
};








#endif