#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

float x, y, resultado = 0;

class Calculadora{

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

class Varios{

public:
    void promedio(){

        int n;
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
};

int main(){

    int opcion;

    Calculadora CalculadoraObjeto;
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
            cout << "\nOpciones: " << endl << "1 - Promedio\n2 - Numero al azar" << endl;
            cin >> opcion;

            switch(opcion){

                case 1: VariosObjeto.promedio();
                break;

                case 2: VariosObjeto.azar();
                break;
            }
        }while(opcion == 2);
    }
}
