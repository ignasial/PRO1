#include <iostream>
using namespace std;

int main() {
    char letra;
    cin >> letra;

    if (letra >= 'a' and letra <= 'z') cout << "lowercase" << endl;
    if (letra >= 'A' and letra <= 'Z') cout << "uppercase"<< endl;
    if (letra == 'A' or letra == 'E' or letra == 'I' or letra == 'O'  or 
    letra == 'U' or letra == 'a' or letra == 'e' or letra == 'i' or 
    letra == 'o' or letra == 'u') cout << "vowel" << endl;
    else cout << "consonant" << endl;
}
