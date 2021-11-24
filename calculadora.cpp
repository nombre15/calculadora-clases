#include <iostream>
#include <math.h>
#include <time.h>
#include "Calculadora.h"
#include "Varios.h"
using namespace std;

int main(){

    int opcion;

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

            switch(opcion){

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
                cout << endl << "sqrt " << x << " = " << resultado;
                break;

                case 7: CalculadoraObjeto.logaritmo();
                cout << endl << "log " << x << " = " << resultado;
                break;

            }

            cout << endl;
        } while(opcion == 1);
    }

    if(opcion == 2){

        do{
            cout << "\nOpciones: " << endl << "1 - Promedio\n2 - Numero al azar\n3 - Lista" << endl;
            cin >> opcion;

            switch(opcion){

                case 1: VariosObjeto.promedio();
                break;

                case 2: VariosObjeto.azar();
                break;

                case 3: VariosObjeto.lista();
                break;

                case 4: VariosObjeto.PrintList();
                break;
            }
        }while(opcion == 2);
    }
}
