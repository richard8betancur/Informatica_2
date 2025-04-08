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
int problema10(){

    int numero;
    cout << "Ingrese un numero entre 1 y 3999: ";
    cin >> numero;

    cout << "Ingresaste el numero: " << numero << endl;


    if (numero >= 1 && numero <= 3999){
        vector<pair<int, string>> valores;
        valores.push_back(make_pair(1000, "M"));
        valores.push_back(make_pair(900, "CM"));
        valores.push_back(make_pair(500, "D"));
        valores.push_back(make_pair(400, "CD"));
        valores.push_back(make_pair(100, "C"));
        valores.push_back(make_pair(90, "XC"));
        valores.push_back(make_pair(50, "L"));
        valores.push_back(make_pair(40, "XL"));
        valores.push_back(make_pair(10, "X"));
        valores.push_back(make_pair(9, "IX"));
        valores.push_back(make_pair(5, "V"));
        valores.push_back(make_pair(4, "IV"));
        valores.push_back(make_pair(1, "I"));

        string romano = "";

        for (int i = 0; i < valores.size(); i++) {
            while (numero >= valores[i].first) {
                romano += valores[i].second;
                numero -= valores[i].first;
            }
        }

        cout << "Numero romano: " << romano << endl;
    } else {
        cout << "Numero fuera de rango." << endl;
    }

    return 0;
}














int main()
{
    problema10();
    return 0;
}
