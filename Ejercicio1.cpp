#include <iostream>
using namespace std;


int sumar(int a, int b);
int multiplicar(int a, int b);
int restar(int a, int b);

int main() {
    int n1, n2, opcion;
    cout << "Ingrese el primer numero: ";
    cin >> n1;
    cout << "Ingrese el segundo numero: ";
    cin >> n2;
    
    cout << "Elije la operacion: " << endl;
    cout << "1. Sumar" << endl;
    cout << "2. Multiplicar" << endl;
    cout << "3. Restar" << endl;
    cin >> opcion;
    
    int result;
    switch(opcion) {
        case 1:
            result = sumar(n1, n2);
            cout << "El resultado de la suma es: " << result << endl;
            break;
        case 2:
            result = multiplicar(n1, n2);
            cout << "El resultado de la multiplicacion es: " << result << endl;
            break;
        case 3:
            result = restar(n1, n2);
            cout << "El resultado de la resta es: " << result << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
    }
    
    return 0;
}


int sumar(int a, int b) {
    return a + b;
}

int multiplicar(int a, int b) {
    return a * b;
}

int restar(int a, int b) {
    return a - b;
}
