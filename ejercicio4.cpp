//PROGRAMA: arreglo
//Autor: Bentacour Alex
//Fexha: 24-11-23

#include <iostream>
using namespace std;
int main() {
    int number[5];
    int sume = 0;
    int i = 0;
    do {
        cout << "Digite el valor para el elemento " << i + 1 << ": ";
        cin >> number[i];                                                              
        sume = sume +number[i];i++;
    } while (i < 5);
    cout << "La suma de los elementos del arreglo sera: " << sume << endl;
    return 0;
}
