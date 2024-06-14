#include <iostream>
using namespace std;

int mayor(int numeros[], int cantidad);

int main() {
    int cantidad;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> cantidad;
    
    int numeros[cantidad];
    cout << "Ingrese los numeros: " << endl;
    for(int i = 0; i < cantidad; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> numeros[i];
    }
    
    int M = mayor(numeros, cantidad);
    cout << "El mayor numero es: " << M << endl;
    
    return 0;
}

int mayor(int numeros[], int cantidad) {
    int mayor = numeros[0];
    for(int i = 1; i < cantidad; i++) {
        if(numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }
    return mayor;
}
