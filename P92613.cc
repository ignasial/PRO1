#include <iostream>
using namespace std;

int main() {
    double numero;
    cin >> numero;

    int inferior, superior, arrodoniment;

    // Parte entera inferior
    inferior = int(numero);

    // Parte entera superior
    if (numero == double(inferior)) 
        superior = inferior;
    else 
        superior = inferior + 1;

    // Redondeo
    if ((numero - inferior) >= 0.5)
        arrodoniment = inferior + 1;
    else
        arrodoniment = inferior;

    // Salida
    cout << inferior << ' ' << superior << ' ' << arrodoniment << endl;
    
}
