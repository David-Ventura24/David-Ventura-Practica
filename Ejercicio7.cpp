#include <iostream>
using namespace std;

double celsiusAFahrenheit(double celsius);

int main() {
    double celsius;
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;
    
    double fahrenheit = celsiusAFahrenheit(celsius);
    cout << "La temperatura en grados Fahrenheit es: " << fahrenheit << endl;
    
    return 0;
}

double celsiusAFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}
