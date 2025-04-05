#include <iostream>

using namespace std;

/*
 * 2. Implementar un caso de prueba para la funcion dada que te permita verificar su forma correcta.
 */

//FUNCION INCORRECTA:
/*
void fun_c(double *a, int n, double *promedio, double *suma){
    int i;
    suma = 0.0;
    for (i = 0; i < n; i++)
        suma += (a + i);
    promedio = suma / n;
}
*/


//FUNCION CORREGIDA:

void fun_c(double *a, int n, double *promedio, double *suma){

    *suma = 0.0;

    for (int i = 0; i < n; i++)
    *suma += *(a + i);
    *promedio = *suma / n;
}


int main()
{
    double arreglo[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    int n = 5;
    double promedio;
    double suma;

    fun_c(arreglo, n, &promedio, &suma);


    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;

    return 0;
}




