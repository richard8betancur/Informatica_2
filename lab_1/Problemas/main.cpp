#include <iostream>

using namespace std;

/*
 * 1. Escriba un programa que permita determinar la minima combinacion de billestes y monedas para una
 * cantidad de dinero determinada.
 */
void Problema2();

/*
 * 2. Escriba un programa que pida una hora en formato 24hrs y un tiempo de la misma manera(sume el tiempo a la hora ingresada).
 */
void Problema4();

/*
 * 3. Escriba un programa que permita ingresar el número de elementos usados en la aproximación del numero de euler.
 */
void Problema6();

/*
 * 4. Escriba un programa que reciba 3 números a, b, c, y calcule la suma de todos los multiplos de a y b que sean menores a c.
 */
void Problema8();



//1. Problema #2:
void Problema2(){
    unsigned long long int numero;


    while(true){
        cout << "Ingrese un numero para determinar la minima combinacion de billetes y monedas. " << endl;
        cin >> numero;

        if(cin.fail()){
            cout << "Error, ingresaste un numero invalido. " << endl;

            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }
        break;
    }

    cout << "Ingresaste el numero " << numero << endl;

    int restante = numero;

    if (restante / 50000){
        cout << "50000: " << restante / 50000 << endl;
        restante %= 50000;
    } else {
        cout << "50000: 0" << endl;
    }

    if (restante / 20000){
        cout << "20000: " << restante / 20000 << endl;
        restante %= 20000;
    } else {
        cout << "20000: 0" << endl;
    }

    if (restante / 10000){
        cout << "10000: " << restante / 10000 << endl;
        restante %= 10000;
    } else {
        cout << "10000: 0" << endl;
    }

    if (restante / 5000){
        cout << "5000: " << restante / 5000 << endl;
        restante %= 5000;
    } else {
        cout << "5000: 0" << endl;
    }

    if (restante / 2000){
        cout << "2000: " << restante / 2000 << endl;
        restante %= 2000;
    } else {
        cout << "2000: 0" << endl;
    }

    if (restante / 1000){
        cout << "1000: " << restante / 1000 << endl;
        restante %= 1000;
    } else {
        cout << "1000: 0" << endl;
    }

    if (restante / 500){
        cout << "500: " << restante / 500 << endl;
        restante %= 500;
    } else {
        cout << "500: 0" << endl;
    }

    if (restante / 200){
        cout << "200: " << restante / 200 << endl;
        restante %= 200;
    } else {
        cout << "200: 0" << endl;
    }

    if (restante / 100){
        cout << "100: " << restante / 100 << endl;
        restante %= 100;
    } else {
        cout << "100 :0" << endl;
    }

    if (restante / 50){
        cout << "50: " << restante / 50 << endl;
        restante %= 50;
    } else {
        cout << "50 :0" << endl;
    }

    cout << "faltante: " << restante << endl;
}

//2. Problema #4:
void Problema4(){

    int hora, duracion;

    while(true){
        cout << "Ingrese una hora en formato de reloj 24hrs: ";
        cin >> hora;
        cout << "Ingresa un tiempo para sumar: ";
        cin >> duracion;

        if (cin.fail()){
            cout << "Error, ingresa un valor invalido. " << endl;

            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        break;
    }

    int hora1 = hora / 100;
    int duracion1 = hora % 100;
    int hora2 = duracion / 100;
    int duracion2 = duracion % 100;

    if (hora1 < 0 || hora1 >= 24 || duracion1 < 0 || duracion1 >= 60 || hora2 < 0 || hora2 >= 24 || duracion2 < 0 || duracion2 >= 60){
        cout << hora << " o " << duracion << " es un tiempo invalido. " << endl;
        return;
    }

    int minutos = duracion1 + duracion2;
    int horasExtra = minutos / 60;
    minutos %= 60;

    int horas = hora1 + hora2 + horasExtra;
    horas %= 24;

    cout << "La suma de la hora " << hora << " y el tiempo " << duracion << " es: ";
    cout << (horas * 100) + minutos << endl;

}

//3. Problema #6:
void Problema6(){
    int numero;
    float resultado = 1;
    float factorial = 1;

    while(true){
        cout << "Ingrese un numero para calcular la aproximacion del numero euler. " << endl;
        cin >> numero;

        if(cin.fail()){
            cout << "Error, ingresaste un numero invalido. " << endl;

            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }
        break;
    }

    cout << "Ingresaste el numero " << numero << endl;

    for (int i = 1; i < numero; i++){
        factorial *= i;
        resultado += (1.0 / factorial);
    }

    cout << "e es aproximadamente: " << resultado << endl;
}

//4. Problema #8:
void Problema8(){

    int a;
    cin >> a;
    cout << a << endl;

}


int main()
{
    Problema8();
    return 0;
}
