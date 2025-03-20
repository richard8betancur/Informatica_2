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

/*
 * 16. Escriba un programa que pida constantemente numeros hasta que se ingrese el numero 0 e imprimma en pantalla el promedio de los numeros (excluyendo el 0)
 */
int Ejercicio16();







//1. Ejercicio #2:
void Ejercicio2(){

    long long int numero;

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
        } else if (numero % 2 != 1) {
            cout << "El numero " << numero << " es impar. " << endl;
            break;
        }
    }
}

//2. Ejercicio #4:
int Ejercicio4(){
    long long int a, b;

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

    long long int a, b;
    long long int resultado = 1;

    while  (true){

        cout << "Ingrese dos numeros, primero para la base y el segundo para el exponente: ";
        cin >> a >> b;

        if (cin.fail()){
            cout << "Error, uno de los numeros es invalido. " << endl;

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

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
        break;
    }


    return 0;
}

//4. Ejercicio #8:
int Ejercicio8(){

    long long int numero;
    long long int factorial = 1;

    while (true){
        cout << "Ingrese un numero: ";
        cin >> numero;

        if (cin.fail()){
            cout << "Error, ingresaste un numero incorrecto. " << endl;

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        for (int i = 1; i <= numero; i++){
            factorial *= i;
            cout << i;

            if (i < numero){
                cout << "*";
            }
        }

        cout << " = " << factorial << endl;

        cout << numero << "!" << "=" << factorial << endl;
        break;
    }

    return 0;
}

//5. Ejercicio #10:
int Ejercicio10(){

    unsigned int numero;

    while (true){
        cout << "Ingrese un numero: ";
        cin >> numero;

        if (cin.fail()){
            cout << "Error, ingresaste un numero invalido. " << endl;

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
            int multiplo = numero;

            while(multiplo <= 100){
                cout << multiplo << endl;
                multiplo += numero;
            }

            break;

        }
    return 0;
}

//6. Ejercicio #12:
int Ejercicio12(){

    long long int numero;

    while (true){
        cout << "Ingresa un numero: ";
        cin >> numero;

        if (cin.fail()){
            cout << "Error, ingresaste un numero invalido. " << endl;

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        for (int i = 1; i <= 5; i++){
            long long int potencia = 1;

            for (int j = 0; j < i; j++){
                potencia *= numero;
            }

            cout << numero << "^" << i << "=" << potencia << endl;
        }

        break;
    }



    return 0;
}

//7. Ejercicio #14:
void Ejercicio14(){

    for (int i = 1, j = 50; i <= 50; i++, j--){
        cout << i << "      " << j << endl;
    }
}

//8. Ejercicio #16:
int Ejercicio16(){

    int numero;
    int suma=0;
    int contador=1;

    while (true){
        cout << "ingrese n numeros para calcular el promedio (0 para calcular): ";
        cin >> numero;



        if (numero != 0){
            suma += numero;

            contador++;

        } else {
            break;
        }
    }

    cout << "El promedio de los n numeros ingresados es: " << suma/contador << endl;


    }

int main()
{
    Ejercicio16();
    return 0;
}







