#include <iostream>
#include <cmath> 
using namespace std;


double calcularAreaCirculo(double radio);

int main() {
    double radio;
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;
    
    double area = calcularAreaCirculo(radio);
    cout << "El área del circulo es: " << area << endl;
    
    return 0;
}

double calcularAreaCirculo(double radio) {
    return M_PI * radio * radio;
}
