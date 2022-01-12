#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <math.h>
using namespace std;

//INSERT VARIABLES IN HERE FOR FUCKING PROGRAM TO WORK

class calculadora
{

public:
    
    //THIS WORKS ONLY IF YOU MAKE THESE VARIABLES GLOBAL
    float resultado, resultado2, x, y;
    
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
