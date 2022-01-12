#ifndef VARIOS_H
#define VARIOS_H
#include <time.h>
using namespace std;

//CANT INCLUDE CALCULADORA.H DONT FUCKING KNOW WHY

int n = 0;

class Varios{

public:
    void promedio(){

        cout << "\nIngrese la cantidad de numeros:  ";
        cin >> n;
        cout << endl;

        int numeros[n]{0};

        cout << "Ingrese los numeros" << endl;

        for(int i = 0; i < n; i++){

            cout << "Valor " << i + 1 << ": ";
            cin >> numeros[i];
        }

        for(int i = 0; i < n; i++){

            resultado = resultado + numeros[i];
        }

        resultado = resultado / n;

        cout << "\nEl promedio es: " << resultado << endl;
    }

    void azar(){

        int primero, ultimo;

        cout << "\nEscribe el primer numero: ";
        cin >> primero;

        cout << "Escribe el ultimo numero: ";
        cin >> ultimo;

        srand(time(0));
        for(int x = x; x < 1; x++){
        }
        cout << "\nNumero elegido: " << primero + rand() %(ultimo + 1 - primero) << endl;
    }

    void lista(){

        cout << "Escribe el numero de elemento de la lista, o 0 para hacerla indefinida" << endl;
        cin >> n;

        int lista[n];

        cout << "Escriba los elementos de la lista" << endl;

        if(n == 0){

          for(int i = 0; i < 100; i++){

            cin >> lista[i];
          }
        }

        for(int i = 0; i < n; i++){

            cin >> lista[i];
        }

        for(int i = 0; i < n; i++){

            cout << lista[i] << endl;
        }

    }

    void PrintList(){

        if(n == 0){

            cout << "List is empty" << endl;
            return;
        }

        else{

            cout << "List is: " << endl;

            for(int i = 0; i < n; i++){

                cout << lista[i] << endl;
            }
        }
    }
};

#endif // VARIOS_H
