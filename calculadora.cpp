#include <iostream>
#include <math.h>
#include <time.h>
#include "Calculadora.h"
#include "Varios.h"
using namespace std;

int main(){

    int opcion, opcion2;

    calculadora CalculadoraObjeto;
    Varios VariosObjeto;

    cout << "1: Calculadora" << endl << "2: Varios" << endl;
    cin >> opcion;

    if(opcion == 1){

        do{
            cout << "\nEscribe x: ";
            cin >> x;
            cout << "Escribe y: ";
            cin >> y;
            cout << endl;

            cout << "Opciones: " << endl << "1 - Suma\n2 - Resta\n3 - Division\n4 - Multiplicacion\n5 - Elevar\n6 - Raiz\n7 - Logaritmo" << endl;
            cin >> opcion;

            switch(opcion2){

                case 1: CalculadoraObjeto.suma();
                cout << endl << x << " + " << y << " = " << resultado;
                break;

                case 2: CalculadoraObjeto.resta();
                cout << endl << x << " - " << y << " = " << resultado;
                break;

                case 3: CalculadoraObjeto.division();
                cout << endl << x << " / " << y << " = " << resultado;
                break;

                case 4: CalculadoraObjeto.multiplicacion();
                cout << endl << x << " x " << y << " = " << resultado;
                break;

                case 5: CalculadoraObjeto.elevar();
                cout << endl << x << " ^ " << y << " = " << resultado;
                break;

                case 6: CalculadoraObjeto.raiz();
                cout << endl << "cuadrado de " << x << " = " << resultado;
                cout << endl << "cuadrado de " << y << " = " << resultado2;
                break;

                case 7: CalculadoraObjeto.logaritmo();
                cout << endl << "log " << x << " = " << resultado;
                cout << endl << "log " << y << " = " << resultado;
                break;

            }

            cout << endl;
        } while(opcion == 1);
    }

    if(opcion == 2){

        do{
            cout << "\nOpciones: " << endl << "1 - Promedio\n2 - Numero al azar\n3 - Lista\n4 - Imprimir lista" << endl;
            cin >> opcion2;
            cout << endl;

            switch(opcion2){

                case 1: VariosObjeto.promedio();
                break;

                case 2: VariosObjeto.azar();
                break;

                case 3: VariosObjeto.lista();
                break;

                case 4: VariosObjeto.PrintList();
                break;
            }

            cout << endl;
        }while(opcion == 2);
    }
}
