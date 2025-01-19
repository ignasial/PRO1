#include <iostream>
using namespace std;

int main() {
    int euros, centims;
    //centims < 100
    cin >> euros >> centims;
    int cont500 = 0;
    int cont200 = 0;
    int cont100 = 0;
    int cont50 = 0;
    int cont20 = 0;
    int cont10 = 0;
    int cont5 = 0;
    int cont2 = 0;
    int cont1 = 0;
    int contc50 = 0;
    int contc20 = 0;
    int contc10 = 0;
    int contc5 = 0;
    int contc2 = 0;
    int contc1 = 0;

    while (euros >= 500) {
        euros -= 500;
        ++cont500;
    }
    while (euros >= 200) {
        euros -= 200;
        ++cont200;
    }
    while (euros >= 100) {
        euros -= 100;
        ++cont100;
    }
    while (euros >= 50) {
        euros -= 50;
        ++cont50;
    }
    while (euros >= 20) {
        euros -= 20;
        ++cont20;
    }
    while (euros >= 10) {
        euros -= 10;
        ++cont10;
    }
    while (euros >= 5) {
        euros -= 5;
        ++cont5;
    }
    while (euros >= 2) {
        euros -= 2;
        ++cont2;
    }
    while (euros >= 1) {
        euros -= 1;
        ++cont1;
    }
    while (centims >= 50) {
        centims -= 50;
        ++contc50;
    }
    while (centims >= 20) {
        centims -= 20;
        ++contc20;
    }
    while (centims >= 10) {
        centims -= 10;
        ++contc10;
    }
    while (centims >= 5) {
        centims -= 5;
        ++contc5;
    }
    while (centims >= 2) {
        centims -= 2;
        ++contc2;
    }
    while (centims >= 1) {
        centims -= 1;
        ++contc1;
    }

    cout << "Bitllets de 500 euros: " << cont500 << endl;
    cout << "Bitllets de 200 euros: " << cont200 << endl;
    cout << "Bitllets de 100 euros: " << cont100 << endl;
    cout << "Bitllets de 50 euros: " << cont50 << endl;
    cout << "Bitllets de 20 euros: " << cont20 << endl;
    cout << "Bitllets de 10 euros: " << cont10 << endl;
    cout << "Bitllets de 5 euros: " << cont5 << endl;
    cout << "Monedes de 2 euros: " << cont2 << endl;
    cout << "Monedes de 1 euro: " << cont1 << endl;
    cout << "Monedes de 50 centims: " << contc50 << endl;
    cout << "Monedes de 20 centims: " << contc20 << endl;
    cout << "Monedes de 10 centims: " << contc10 << endl;
    cout << "Monedes de 5 centims: " << contc5 << endl;
    cout << "Monedes de 2 centims: " << contc2 << endl;
    cout << "Monedes de 1 centim: " << contc1 << endl;


}
