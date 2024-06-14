#include <iostream>
using namespace std;

double calcularPromedio(int numeros[], int cantidad);

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
    
    double promedio = calcularPromedio(numeros, cantidad);
    cout << "El promedio es: " << promedio << endl;
    
    return 0;
}

double calcularPromedio(int numeros[], int cantidad) {
    int suma = 0;
    for(int i = 0; i < cantidad; i++) {
        suma += numeros[i];
    }
    return static_cast<double>(suma) / cantidad;
}
