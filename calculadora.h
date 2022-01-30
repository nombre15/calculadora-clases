#include <iostream>
#include <math.h>
#include <conio.h>
#include <windows.h>
#include "Calculadora.h"
#include "Varios.h"
using namespace std;

int main(){

    int opcion, opcion2;
    char tecla;

    calculadora CalculadoraObjeto;
    Varios VariosObjeto;

    inicio:

    cout << "1: Calculadora" << endl << "2: Varios" << endl;
    cin >> opcion;

    system("CLS");

    switch(opcion){

        case 1:

            do{
                cout << "Escribe x: ";
                cin >> x;
                cout << "Escribe y: ";
                cin >> y;
                cout << endl;
                system("CLS");

                cout << "Opciones: " << endl << "1 - Suma\n2 - Resta\n3 - Division\n4 - Multiplicacion\n5 - Elevar\n6 - Raiz\n7 - Logaritmo" << endl;
                cin >> opcion2;
                system("CLS");

                switch(opcion2){

                    case 1: CalculadoraObjeto.suma();
                        cout << x << " + " << y << " = " << resultado;
                    break;

                    case 2: CalculadoraObjeto.resta();
                        cout << x << " - " << y << " = " << resultado;
                    break;

                    case 3: CalculadoraObjeto.division();
                        cout << x << " / " << y << " = " << resultado;
                    break;

                    case 4: CalculadoraObjeto.multiplicacion();
                        cout << x << " x " << y << " = " << resultado;
                    break;

                    case 5: CalculadoraObjeto.elevar();
                        cout << x << " ^ " << y << " = " << resultado;
                    break;

                    case 6: CalculadoraObjeto.raiz();
                        cout << "cuadrado de " << x << " = " << resultado;
                        cout << "\ncuadrado de " << y << " = " << resultado2;
                    break;

                    case 7: CalculadoraObjeto.logaritmo();
                        cout << "log " << x << " = " << resultado;
                        cout << "\nlog " << y << " = " << resultado;
                    break;
                }

                cout << "\n\nPresiona Enter para repetir, o ESC para salir" << endl;
                tecla = getch();
                system("CLS");

                if(tecla == 27){
                    goto inicio;
                }

            }while(tecla == 13);
        break;

        case 2:

            do{
                cout << "Opciones: " << endl << "1 - Promedio\n2 - Numero al azar\n3 - Lista\n4 - Imprimir lista" << endl;
                cin >> opcion2;
                cout << endl;
                system("CLS");

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

            cout << "\n\nPresiona Enter para repetir, o ESC para salir" << endl;
            tecla = getch();
            system("CLS");

             if(tecla == 27){
                 goto inicio;
             }

            }while(tecla == 13);
        break;
    }
}
