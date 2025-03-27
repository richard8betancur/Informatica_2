#include <iostream>
#include <cstdlib>

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
 * 16. Escriba un programa que pida constantemente numeros hasta que se ingrese el numero 0 e imprimma en pantalla el promedio de los numeros
 * (excluyendo el 0)
 */
int Ejercicio16();

/*
 * 18. Escriba un programa que pida un número N e imprima si es o no un cuadrado perfecto
 */
void Ejercicio18();

/*
 * 20. Escriba un programa que pida un número N e imprima si es o no un palíndromo
 * (igual de derecha a izquierda que de izquierda a derecha).
 */
bool Ejercicio20();

/*
 * 22. Escriba un programa que pida una cantidad entera de segundos y la imprima en formato horas:minutos:segundos.
 */
int Ejercicio22();

/*
 * 24. Escriba un programa que pida una número entero e imprima un cuadrado de dicho
 tamaño, los bordes del cuadrado deben estar hechos con el carácter `+' y el interior debe estar vacío.
 */
void Ejercicio24();

/*
 * 26. Escriba un programa que pida tres números e imprima el tipo de triangulo (isósceles, equilátero, escaleno).
 */
int Ejercicio26();

/*
 * 28. Escriba un programa que encuentre el valor aproximado de pi en base a la siguiente suma infnita (serie de lebniz).
 */
int Ejercicio28();

/*
 * 30. Escriba un programa que genere un número aleatorio A (entre 0 y 100) y le pida al usuario que lo adivine.
 */
int Ejercicio30();






//1. Ejercicio #2:
void Ejercicio2(){

    long long int numero;

    while (true){
        cout << "Por favor ingrese un numero: ";
        cin >> numero;

        if (cin.fail()){
            cout << "Error, ingrese un numero valido. " << endl;

            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        if (numero % 2 == 0){
            cout << "El numero " << numero << " es par. " << endl;
            break;
        } else if (numero % 2 != 0) {
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
            cin.ignore(1000, '\n');
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

    while(true){
        cout << "Ingrese dos numeros, primero para la base y el segundo para el exponente: ";
        cin >> a >> b;

        if (cin.fail()){
            cout << "Error, uno de los numeros es invalido. " << endl;

            cin.clear();
            cin.ignore(1000, '\n');
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
            cin.ignore(1000, '\n');
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
            cin.ignore(1000, '\n');
            continue;
        }
        unsigned int multiplo = numero;

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
            cin.ignore(1000, '\n');
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

    for (unsigned int i = 1, j = 50; i <= 50; i++, j--){
        cout << i << "      " << j << endl;
    }
}

//8. Ejercicio #16:
int Ejercicio16(){

    signed long long int numero;
    double suma = 0.0;
    unsigned int contador = 0;
    double resultado;

    while (true){
        cout << "ingrese n numeros para calcular el promedio (0 para calcular): ";
        cin >> numero;

        if (cin.fail()){
            cout << "Ingrese un numero valido. " << endl;

            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        if (numero != 0){
            suma += numero;

            contador++;
        } else {
            break;
        }
    }

    resultado = suma / contador;
    cout << "El promedio de los n numeros ingresados es: " << resultado << endl;

    return 0;
}

//9. Ejercicio #18:
void Ejercicio18(){

    bool cuadrado = false;
    unsigned long long int numero;

    while(true){
        cout << "Ingrese un numero para comprobar si es o no cuadrado perfecto: ";
        cin >> numero;

        if (cin.fail()){
            cout << "Ingrese un numero valido. " << endl;

            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }
        break;
    }


    for (int i = 0; i * i <= numero; i++){
        if (i * i == numero){
            cuadrado = true;
            break;
        }
    }

    if (cuadrado){
        cout << numero << " es un cuadrado perfecto" << endl;
    } else{
        cout << numero <<" NO es un cuadrado perfecto" << endl;
    }
}

//10. Ejercicio #20:
bool Ejercicio20(){

    string cadena;

    while(true){   
        cout << "Ingrese un numero para saber si es palindromo o no. ";
        cin >> cadena;

        bool Esnumero = true;
        for (char c : cadena){
            if(!isdigit(c)){
                Esnumero = false;
                break;
            }
        }

        if (!Esnumero){
            cout << "Error, ingrese un numero valido" << endl;

            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }
        break;
    }

    for (int i = 0, j = cadena.length() - 1; i < j; i++, j--){
        if (cadena[i] != cadena[j]){
            cout << "El numero " << cadena << " no es un palindromo. " << endl;
            return false;
        }
    }

    cout << "El numero " << cadena << " es un palindromo. " << endl;
    return true;
}

//11. Ejercicio #22:
int Ejercicio22(){

    unsigned long long int numero;

    while(true){
        cout << "Ingrese una cantidad de segundos para transformar en formato H/M/S " << endl;
        cin >> numero;

        if (cin.fail()){
            cout << "Ingrese un numero valido. " << endl;

            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }
        break;
    }

    cout << "El numero que ingresaste fue el: " << numero << endl;

    unsigned int horas = numero / 3600;
    unsigned int minutos = (numero % 3600) / 60;
    unsigned int segundos = numero % 60;

    cout << "El formato del numero a H/M/S es: " << horas << ":" << minutos << ":" << segundos << endl;

    return 0;
}

//12. Ejercicio #24:
void Ejercicio24(){
    unsigned int numero;

    while (true){
        cout << "Ingrese un numero: ";
        cin >> numero;

        if (cin.fail()){
            cout << "Error, ingresaste un numero invalido. " << endl;

            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }
        break;
    }

    cout << "Ingresaste el numero " << numero << endl;

    for (unsigned int i = 0; i < numero; i++){
        for (unsigned int j = 0; j < numero ; j++){
            if (j == 0 || j == numero - 1 || i == 0 || i == numero - 1){
                cout << "+";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

//13. Ejercicio #26
int Ejercicio26(){

    long long int num1,num2,num3;

    while(true){
        cout << "Ingrese tres numeros para calcular si forman un triangulo (isósceles, equilátero, escaleno)" << endl;
        cin >> num1 >> num2 >> num3;

        if(cin.fail()){
            cout << "Ingresaste un numero invalido. " << endl;

            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        if ((num1 + num2) <= num3 || (num2 + num3) <= num1 || (num3 + num1) <= num2){
            cout << "Los numeros ingresados no forman un triangulo. " << endl;
        } else if (num1 != num2 && num3 != num2 && num3 != num1){
            cout << "Los 3 numeros ingresados son diferentes, forman un triangulo escaleno. " << endl;
        } else if (num1 == num2 && num2 == num3){
            cout << "Los 3 numeros ingresados son iguales, forman un triangulo equilatero. " << endl;
        } else if ((num1 == num2) != num3 || (num1 == num3) != num2 || (num2 == num3) != num1){
            cout << "Hay 2 numeros iguales, los 3 numeros forman un triangulo isoceles. " << endl;
        }
        break;
    }

    return 0;
}

//14. Ejercicio #28
int Ejercicio28(){

    int numero;
    double aprox = 0.0;
    int signo = 1;

    cout << "Ingrese un numero para calcular la aproximacion a el numero pi. " << endl;
    cin >> numero;

    for (int i = 0; i < numero; i++){
        int denominador = 2*i + 1;
        aprox += signo * (1.0 / denominador);
        signo *= -1;
    }

    aprox *= 4;

    cout << "El valor aproximado de pi es: " << aprox << endl;
    return 0;
}

//15. Ejercicio #30
int Ejercicio30(){
    srand(time(0));

    unsigned short int numeroAleatorio = rand() % 101;
    unsigned int numero2;
    unsigned int contador = 0;

    while(true){
        cout << "Adinina el numero en un rango de (0-100): ";
        cin >> numero2;

        if (cin.fail()){
            cout << "Error, ingresaste un numero invalido. " << endl;

            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }
        contador ++;

        if (numero2 < numeroAleatorio){
            cout << "Ingresaste un numero menor, sigue intentando. " << endl;
            continue;
        } else if(numero2 > numeroAleatorio){
            cout << "Ingresaste un numero mayor, sigue intentando. " << endl;
            continue;
        } else {
            cout << "Adivinaste el numero  aletorio, numero a adivinar: " << numeroAleatorio << ", ingresaste el numero: " << numero2 << endl;
            cout << "Te demoraste " << contador << " veces en adivinar el numero. " << endl;
            break;
        }
    }

    return 0;
}


int main()
{
    Ejercicio30();
    return 0;
}







