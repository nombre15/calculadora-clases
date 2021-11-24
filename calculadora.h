#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <math.h>
using namespace std;

float resultado, x, y;

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
    }

    void logaritmo(){
        resultado = log(x);
    }
};

#endif // CALCULADORA_H
