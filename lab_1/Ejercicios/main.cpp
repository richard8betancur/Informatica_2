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

/*
 * 6. Escriba un programa que pida dos numeros A y B e imprima en pantalla la potencia
 * A^B (sin uso de librerias matematicas).
 */
int Ejercicio6();

/*
 * 8. Escriba un programa que pida un numero N e imprima en pantalla su factorial.
 */
int Ejercicio8();


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

//2. Ejercicio #4:
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

//3. Ejercicio #6:
int Ejercicio6(){

    long long a, b;
    long long resultado = 1;
    cout << "Ingrese un numero (base): ";
    cin >> a;
    cout << "Ingrese otro numero (exponente): ";
    cin >> b;

    if (a == 0 && b == 0){
        cout << "Error, el resultado de 0^0 es una indeterminacion" << endl;
        return 0;
    } else if (b == 0){
        cout << "El resultado de " << a << "^" << b << " es 1. " << endl;
        return 0;
    } else if (a == 0){
        cout << "El resultado de " << a << "^" << b << " es 0. " << endl;
        return 0;
    }

    for (int i = 0; i < b; i++){
        resultado *= a;
    }

    cout << "El resultado de " << a << "^" << b << " es " << resultado << endl;

    return 0;
}

//4. Ejercicio #8:
int Ejercicio8(){

    int numero;
    int factorial = 1;
    cout << "Ingrese un numero: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++){
        factorial *= i;
        cout << i;

        if (i < numero){
            cout << "*";
        }
    }

    cout << " = " << factorial << endl;

    cout << numero << "!" << "=" << factorial << endl;

    return 0;
}

int main()
{
    Ejercicio8();
    return 0;
}







