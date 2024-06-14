#include <iostream>
using namespace std;

bool Primo(int numero);

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    
    if (Primo(numero)) {
        cout << "El numero " << numero << " es primo." << endl;
    } else {
        cout << "El numero " << numero << " no es primo." << endl;
    }
    
    return 0;
}
bool Primo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}
