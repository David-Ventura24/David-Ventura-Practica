#include <iostream>
using namespace std;

double dolarAEuro(double cantidad);
double euroADolar(double cantidad);
double dolarAPeso(double cantidad);
double pesoADolar(double cantidad);

int main() {
    int opcion;
    double cantidad;
    
    cout << "Conversor de Monedas" << endl;
    cout << "1. Dolar a Euro" << endl;
    cout << "2. Euro a Dolar" << endl;
    cout << "3. Dolar a Peso Mexicano" << endl;
    cout << "4. Peso Mexicano a Dolar" << endl;
    cout << "Seleccione una opcion: ";
    cin >> opcion;
    
    cout << "Ingrese la cantidad a convertir: ";
    cin >> cantidad;
    
    double resultado;
    switch(opcion) {
        case 1:
            resultado = dolarAEuro(cantidad);
            cout << "Resultado: " << cantidad << " dolares = " << resultado << " euros" << endl;
            break;
        case 2:
            resultado = euroADolar(cantidad);
            cout << "Resultado: " << cantidad << " euros = " << resultado << " dolares" << endl;
            break;
        case 3:
            resultado = dolarAPeso(cantidad);
            cout << "Resultado: " << cantidad << " dolares = " << resultado << " pesos mexicanos" << endl;
            break;
        case 4:
            resultado = pesoADolar(cantidad);
            cout << "Resultado: " << cantidad << " pesos mexicanos = " << resultado << " dolares" << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
    }
    
    return 0;
}


double dolarAEuro(double cantidad) {
    return cantidad * 0.85; 
}

double euroADolar(double cantidad) {
    return cantidad * 1.18;
}

double dolarAPeso(double cantidad) {
    return cantidad * 20.0;  
}
double pesoADolar(double cantidad) {
    return cantidad * 0.05;  
}
