#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
 * 2. Escribe un programa que genere un arreglo de 200 letras mayusculas aletorias, imprimelo y luego imprime cuantas
 * veces se repite una letra en el.
 */
void problema2();

/*
 * 4. Escriba un problema que reciba una cadena de caracteres numéricos, la convierta a un número entero y retorne
 * dicho número
 */
int problema4();


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

int problema4(){

    string numero;

    cout << "Ingrese un numero: " << endl;
    cin >> numero;

    int convertido = stoi(numero);

    cout << "El numero en cadena de texto es: " << numero << endl;
    cout << "El numero convertido a entero es: " << convertido << endl;

    return convertido;
}

/*
 * Problema de prueba:
 */

void problemaPrueba4(){
    string cadena = "123";
    int numero = stoi(cadena);

    cout << "Cadena inicial: " << cadena << endl;
    cout << "Numero convertido: " << numero << endl;
}






int main()
{
    problema4();
    return 0;
}
