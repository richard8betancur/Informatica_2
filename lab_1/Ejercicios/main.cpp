#include <iostream>

using namespace std;

/*
 * 2. Escriba un problema que pida un numero N e imprima en pantalla si es par o impar.
 */
void Ejercicio2();

/*
 * 4. Escriba un problema que pida dos numeros A y B e imprima en pantalla el menor.
 */
int Ejercicio4();


//1. Ejercicio #2:
void Ejercicio2(){

    int numero;
    cout << "Por favor ingrese un numero: ";
    cin >> numero;

    if (numero % 2 == 0){
        cout << "El numero " << numero << " es par. " << endl;
    } else {
        cout << "El numero " << numero << " es impar. " << endl;
    }
}

int Ejercicio4(){
    int a, b;
    cout << "Ingrese un numero: ";
    cin >> a;
    cout << "Ingrese otro numero: ";
    cin >> b;

    if (a < b){
        cout << "El numero " << a << " es menor que el numero " << b << endl;
    } else if (b < a){
        cout << "El numero " << b << " es menor que el numero " << a << endl;
    } else {
        cout << "Los numeros " << a << " y " << b << " son iguales. " << endl;
    }
    return 0;
}

int main()
{
    Ejercicio4();
    return 0;
}
