#include <iostream>

using namespace std;

void Ejercicio1(){

    int numero;
    cout << "Por favor ingrese un numero: ";
    cin >> numero;

    if (numero % 2 == 0){
        cout << "El numero " << numero << " es par. " << endl;
    } else {
        cout << "El numero " << numero << " es impar. " << endl;
    }
}

int main()
{
    Ejercicio1();

    return 0;
}
