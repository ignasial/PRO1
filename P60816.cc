#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    while (number >= 16) {
        int hex_number = number%16;
        if (hex_number == 10) cout << 'A';
        else if (hex_number == 11) cout << 'B';
        else if (hex_number == 12) cout << 'C';
        else if (hex_number == 13) cout << 'D';
        else if (hex_number == 14) cout << 'E';
        else if (hex_number == 15) cout << 'F';
        else cout << hex_number;
        number /= 16;
    }
    if (number == 10) cout << 'A';
    else if (number == 11) cout << 'B';
    else if (number == 12) cout << 'C';
    else if (number == 13) cout << 'D';
    else if (number == 14) cout << 'E';
    else if (number == 15) cout << 'F';
    else cout << number;
    cout << endl;

}
