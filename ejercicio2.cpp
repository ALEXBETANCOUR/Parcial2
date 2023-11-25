//Programa: Positivo, Negativos y cero
//Autor: Betancour Alex
//Fecha: 24-11-23


#include <iostream>
using namespace std;
int main() {
    int number;

    cout << "Digite un número: ";
    cin >> number;                                                                          if (number > 0) {
        cout << "El número que ingreso es positivo." <<endl;
    } else if (number < 0) {
        cout << "El número que ingreso es negativo." <<endl;                                 } else {
        cout << "El número que ingreso  es cero." <<endl;                                     }
    return 0;
}
