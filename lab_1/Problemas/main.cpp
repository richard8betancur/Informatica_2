#include <iostream>
#include <vector>

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

/*
 * 5. Escriba un programa que reciba un numero n e imprima el enesimo numero primo.
 */
int Problema10();

/*
 * 6. Escriba un programa que calcula el máximo factor primo de un número.
 */
int Problema12();

/*
 * 7. Escriba un programa que calcule el número palíndromo más grande que se puede
 * obtener como una multiplicación de números de 3 dígitos.
 */
int Problema14();

/*
 * 8. Escriba un programa que reciba un número k y calcule cual es el elemento inicial j(semilla),menor
 * que k, que produce la serie más larga y diga cuantos términos m tiene la serie.
 */
void Problema16();






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

    cout << "Ingresaste la cantidad: " << numero << endl;

    unsigned long long int restante = numero;

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
        cout << "100: 0" << endl;
    }

    if (restante / 50){
        cout << "50: " << restante / 50 << endl;
        restante %= 50;
    } else {
        cout << "50: 0" << endl;
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

    if (hora1 < 0 || hora1 >= 24 || duracion1 < 0 || duracion1 >= 60 ||
        hora2 < 0 || hora2 >= 24 || duracion2 < 0 || duracion2 >= 60){
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
    double resultado = 1.0;
    double factorial = 1.0;

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

    for (int i = 1; i <= numero; i++){
        factorial *= i;
        resultado += (1.0 / factorial);
    }

    cout << "e es aproximadamente: " << resultado << endl;
}

//4. Problema #8:
void Problema8(){


    int a, b, c;

    while(true){
        cout << "Ingrese dos numeros a y b para sumar: ";
        cin >> a;
        cin >> b;
        cout << "Ingrese un numero c para el limite de la suma: ";
        cin >> c;

        if (cin.fail()){
            cout << "Error, ingresa un valor invalido. " << endl;

            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }
        break;
    }

    vector<int> multiplos;

    for(int i = a; i < c; i += a){
        multiplos.push_back(i);
    }

    for(int i = b; i < c; i += b){
        bool igual = false;

        for(int num : multiplos){
            if(num == i){
                igual = true;
                break;
            }
        }

        if(!igual){
            multiplos.push_back(i);
        }
    }

    int suma = 0;
    for (int num : multiplos) {
        suma += num;
    }

    cout << "Multiplos de " << a << " y " << b << " menores que " << c << ": ";

    for(int num : multiplos){
        cout << num << " ";
    }
    cout << endl;


    cout << "Suma total de multiplos: " << suma << endl;
}

//5. Problema #10:
int Problema10(){
    int num;
    while(true){
        cout << "Ingrese un numero n para calcular el enesimo numero primo: ";
        cin >> num;

        if (cin.fail()){
            cout << "Error, ingresa un valor invalido. " << endl;

            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }
        break;
    }


    if(num < 1){
        cout << "Numero incorrecto";
        return 0;
    }

    int contador = 0;
    int numero = 1;

    while(contador < num){
        numero++;
        bool EsPrimo = true;


        for(int i = 2 ; i*i <= numero; i++){
            if(numero % i == 0){
                EsPrimo = false;
                break;
            }
        }


        if(EsPrimo){
            contador++;
        }
    }

    cout <<  "El primo numero " << num << " es " << numero << endl;

    return 0;
}

//6. Problema #12:
int Problema12(){

    int num;

    while(true){
        cout << "Ingrese un numero para calcular su mayor factor primo: ";
        cin >> num;

        if (cin.fail() || num < 2){
            cout << "Ingresaste un numero invalido o menor que 2. " << endl;

            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }
        break;
    }

    int MayorFactorPrimo = 1;

    for (int i = 2; i <= num; i++){
        if (num % i == 0){
            bool Esprimo = true;

            for (int j = 2; j * j <= i; j++){
                if (i % j == 0){
                    Esprimo = false;
                    break;
                }
            }

            if (Esprimo){
                MayorFactorPrimo = i;
            }
        }
    }

    cout << "El mayor factor primo de " << num << " es " << MayorFactorPrimo << endl;

    return 0;
}

//7. Problema #14:
int Problema14(){

    int MaxPalindromo = 0;
    int valor1 = 0, valor2 = 0;

    int multiplicacion;
    for (int i = 100; i <= 999; i++){
        for (int j = 100; j <= 999; j++){
            multiplicacion = i * j;
            string resultado = to_string(multiplicacion);

            bool EsPalindromo = true;
            for (int r = 0, l = resultado.length() - 1; r < l; r++, l--){
                if (resultado[r] != resultado[l]){
                    EsPalindromo = false;
                    break;
                }
            }

            if (EsPalindromo && multiplicacion > MaxPalindromo){
                MaxPalindromo = multiplicacion;
                valor1 = i;
                valor2 = j;
            }
        }
    }
    cout << valor1 << " * " << valor2 << " = " << MaxPalindromo << endl;

    return MaxPalindromo;
}

//8. Problema #16:
void Problema16(){

    int k;

    while(true){
        cout << "Ingrese un valor para calcular el elemento menor de dicho numero (mediante la serie Collatz): ";
        cin >> k;

        if (cin.fail()){
            cout << "Error, ingresa un valor invalido. " << endl;

            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        break;
    }
    cout << "Ingresaste el numero: " << k << endl;

    int MejorSemilla = 1;
    size_t cantidad = 0;
    vector<int> MejorSerie;

    for (int i = 1; i < k; i++) {
        int numero = i;
        vector<int> serie;
        serie.push_back(numero);

        while(numero != 1){
            if(numero % 2 == 0){
                numero /= 2;
            } else{
                numero = 3 * numero + 1;
            }
            serie.push_back(numero);
        }

        if(serie.size() > cantidad){
            cantidad = serie.size();
            MejorSemilla = i;
            MejorSerie = serie;
        }
    }

    cout << "La serie mas larga es con la semilla: " << MejorSemilla << ", teniendo " << cantidad << " terminos." << endl;

    cout << "Serie: ";
    for(int num : MejorSerie){
        cout << num << " ";
    }
    cout << endl;
}


int main()
{
    Problema10();
    cout << "Gracias por usar nuestro programa :) " << endl;
    cout << "Hecho por Richard y Sebas.";

    return 0;
}
