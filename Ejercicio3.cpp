#include <iostream>
using namespace std;

int Menor(int numeros[], int cantidad);

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
    
    int m = Menor(numeros, cantidad);
    cout << "El menor numero es: " << m << endl;
    
    return 0;
}


int Menor(int numeros[], int cantidad) {
    int menor = numeros[0];
    for(int i = 1; i < cantidad; i++) {
        if(numeros[i] < menor) {
            menor = numeros[i];
        }
    }
    return menor;
}
