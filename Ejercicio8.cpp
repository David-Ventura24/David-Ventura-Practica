#include <iostream>
using namespace std;

bool esPrimo(int numero);

int main() {
    int cantidad;
    cout << "Ingrese la cantidad de numeros primos que desea obtener: ";
    cin >> cantidad;
    
    int count = 0;  
    int num = 2;     
    
    cout << "Los primeros " << cantidad << " números primos son: ";
    while (count < cantidad) {
        if (esPrimo(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }
    cout << endl;
    
    return 0;
}
bool esPrimo(int numero) {
    if (numero <= 1) return false;
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}
