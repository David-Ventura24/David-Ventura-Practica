#include <iostream>
using namespace std;


double calcularCUM(double notas[], int unidades[], int cantidad);

int main() {
    int cantidad;
    cout << "Ingrese el numero de materias cursadas: ";
    cin >> cantidad;
    
    int notas[cantidad], unidades[cantidad];
    
    for(int i = 0; i < cantidad; i++) {
        cout << "Nota de la materia " << (i + 1) << ": ";
        cin >> notas[i];
        cout << "Unidades valorativas de la materia " << (i + 1) << ": ";
        cin >> unidades[i];
    }
    
    double cum = calcularCUM(notas, unidades, cantidad);
    cout << "El CUM es: " << cum << endl;
    
    return 0;
}

double calcularCUM(int notas[], int unidades[], int cantidad) {
    int sumaNotas = 0, sumaUnidades = 0;
    for(int i = 0; i < cantidad; i++) {
        sumaNotas += notas[i] * unidades[i];
        sumaUnidades += unidades[i];
    }
    return (double)sumaNotas / sumaUnidades;
}
