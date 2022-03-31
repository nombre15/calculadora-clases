#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <math.h>

float resultado, resultado2, x, y;

class calculadora
{

public:

    void suma(){
        resultado = x + y;
    }

    void resta(){
        resultado = x - y;
    }

    void division(){
        resultado = x / y;
    }

    void multiplicacion(){
        resultado = x * y;
    }

    void elevar(){
        resultado = pow(x, y);
    }

    void raiz(){
        resultado = sqrt(x);
        resultado2 = sqrt(y);
    }

    void logaritmo(){
        resultado = log(x);
        resultado2 = log(y);
    }
};

#endif // CALCULADORA_H
