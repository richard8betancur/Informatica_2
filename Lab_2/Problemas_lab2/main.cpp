#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <vector>

using namespace std;

/*
 * 2. Escribe un programa que genere un arreglo de 200 letras mayusculas aletorias, imprimelo y luego imprime cuantas
 * veces se repite una letra en el.
 */
void problema2();

/*
 * 4. Escriba un programa que reciba una cadena de caracteres numéricos, la convierta a un número entero y retorne
 * dicho número.
 */
int problema4();

/*
 * 6. Escriba un programa que reciba una cadena de caracteres y cambie las letras minusculas por mayusculas, los
 * demas caracteres no deben ser alterados.
 */
int problema6();

/*
 * 8. Escribe un programa que reciba una cadena de caracteres y separe los numeros del resto de caracteres
 * generando una cadena que no tiene números y otra con los números que había en la cadena original.
 */
int problema8();

/*
 * 10. Escribe un programa que permita convertir un número en el sistema romano al sistema arábigo usado
 * actualmente.
 */
int problema10();



//1. Problema #2:
void problema2(){

    srand(time(0));

    const int tam = 200;
    char letras[tam];

    for (int i = 0; i < tam; i++){
        letras[i] = 'A' + rand() % 26;
        cout << letras[i];

    }
    cout << endl;

    int contador[26] = {0};

    for (int i = 0; i < tam; i ++){
        contador[letras[i] - 'A']++;
    }

    for (int i = 0; i < 26; i++){
        if (contador[i] > 1){
            cout << "La letra " << char('A' + i) << " se repite " << contador[i] << " veces " << endl;
        }
    }
}


//2. Problema #4:
int problema4(){

    string numero;

    cout << "Ingrese un numero: " << endl;
    cin >> numero;

    int convertido = stoi(numero);

    cout << "El numero en cadena de texto es: " << numero << endl;
    cout << "El numero convertido a entero es: " << convertido << endl;

    return convertido;
}


//Problema de prueba del problema #4:
void problemaPrueba4(){
    string cadena = "123";
    int numero = stoi(cadena);

    cout << "Cadena inicial: " << cadena << endl;
    cout << "Numero convertido: " << numero << endl;
}


//3. Problema #6:
int problema6(){

    string cadena;

    cout << "Por favor ingrese una palabra: ";
    cin >> cadena;

    cout << "Palabra original: " << cadena << endl;

    for (char& c : cadena){
        c = toupper(c);
    }

    cout << "Palabra transformada a mayuscula: " << cadena << endl;

    return 0;
}


//4. Problema #8:
int problema8(){

    string cadena;
    string numeros = "";
    string cadena2;

    cout << "Ingrese una cadena de texto: " << endl;
    cin >> cadena;

    cout << "Original: " << cadena << endl;


    cout << "Texto: ";
    for (char& c : cadena){
        if (isalpha(c)){
            cadena2 = c;
            cout << cadena2;
        }
    }
    cout << endl;

    cout << "Numero: ";
    for (char& c : cadena){
        if (isdigit(c)){
            numeros = c;
            cout << numeros;
        }
    }
    cout << endl;


    return 0;
}


//5. Problema #10:

int problema10() {
    string romano;
    cout << "Ingrese un numero romano en mayusculas (ej: DCLXVI): ";
    cin >> romano;

    cout << "El numero ingresado fue: " << romano << endl;

    char simbolos[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int valores[]   = {  1,   5,  10,  50, 100, 500,1000};

    int total = 0;

    for (size_t i = 0; i < romano.length(); i++) {
        int actual = 0;
        int siguiente = 0;

        for (int j = 0; j < 7; j++) {
            if (romano[i] == simbolos[j]) {
                actual = valores[j];
                break;
            }
        }

        if (i + 1 < romano.length()) {
            for (int j = 0; j < 7; j++) {
                if (romano[i + 1] == simbolos[j]) {
                    siguiente = valores[j];
                    break;
                }
            }
        }

        if (actual == 0) {
            cout << "Caracter invalido encontrado: " << romano[i] << endl;
            return 1;
        }

        if (actual < siguiente) {
            total -= actual;
        } else {
            total += actual;
        }
    }

    cout << "Que corresponde a: " << total << endl;

    return 0;
}




int main()
{
    problema10();
    return 0;
}
