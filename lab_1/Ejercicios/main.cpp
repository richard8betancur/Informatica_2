#include <iostream>
#include <limits>

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

/*
 * 10. Escriba un programa que pida un numero N e imprima en pantalla todos los multiplos de dicho numero entre 1 y 100.
 */
int Ejercicio10();

/*
 * 12. Escriba un programa que pida un numero N e imprima en pantalla todas las potencias desde N^1 hasta N^5
 */
int Ejercicio12();

/*
 * 14. Escriba un problema que imprima dos columnas paralelas, una con los numeros del 1 al 50 y la otra del 50 al 1.
 */
void Ejercicio14();






//1. Ejercicio #2:
void Ejercicio2(){

    int numero;

    while (true){
        cout << "Por favor ingrese un numero: ";
        cin >> numero;

        if (cin.fail()){
            cout << "Error, ingrese un numero valido. " << endl;

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (numero % 2 == 0){
            cout << "El numero " << numero << " es par. " << endl;
            break;
        } else if (numero % 2 == 1) {
            cout << "El numero " << numero << " es impar. " << endl;
            break;
        }
    }
}

//2. Ejercicio #4:
int Ejercicio4(){
    int a, b;

    while(true){
        cout << "Ingrese dos numeros: ";
        cin >> a >> b;

        if (cin.fail()){
            cout << "Error, uno de los numeros es incorrecto. " << endl;

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (a < b){
            cout << "El numero " << a << " es menor que el numero " << b << endl;
            break;
        } else if (b < a){
            cout << "El numero " << b << " es menor que el numero " << a << endl;
            break;
        } else {
            cout << "Los numeros " << a << " y " << b << " son iguales. " << endl;
            break;
        }
    }

    return 0;
}

//3. Ejercicio #6:
int Ejercicio6(){

    int a, b;
    int resultado = 1;
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

//5. Ejercicio #10:
int Ejercicio10(){

    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    int multiplo = numero;

    while(multiplo <= 100){
        cout << multiplo << endl;
        multiplo += numero;
    }

    return 0;
}

//6. Ejercicio #12:
int Ejercicio12(){

    int numero;
    cout << "Ingresa un numero: ";
    cin >> numero;

    for (int i = 1; i <= 5; i++){
        int potencia = 1;

        for (int j = 0; j < i; j++){
            potencia *= numero;
        }

        cout << numero << "^" << i << "=" << potencia << endl;
    }

    return 0;
}

//7. Ejercicio #14:
void Ejercicio14(){

    for (int i = 1, j = 50; i <= 50; i++, j--){
        cout << i << "      " << j << endl;
    }
}


int main()
{
    Ejercicio14();
    return 0;
}







