//Programa: Tabla de multiplicar
//Autor: Betancour Alex
//Fecha: 24-11-23


#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Ingresw el número para mostrar la tabla de multiplicar: ";                     cin >> number;
    cout << "Tabla de multiplicar del " << number << ":" << endl;
    int i = 1;
    do {   cout << number << " x " << i << " = " << number * i << endl; i++;
    } while (i <= 10);

    return 0;
}
