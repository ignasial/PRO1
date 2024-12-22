//multiples of three

#include <iostream>

using namespace std;

//PRE: un enter n estrictament positiu
//POST: la suma de les xifres de n
int suma_digits(int n) {

    if (n < 10) return n;
    else return n%10 + suma_digits(n/10);
    
}

//PRE: un enter n estrictament positiu
//POST: true si la suma de les xifres de n és múltiple de 3, false en qualsevol
//altre cas
bool es_multiple_3(int n) {

    bool es_multiple = true;

    if (suma_digits(n)%3 == 0) es_multiple = true;
    else es_multiple = false;

    return es_multiple;
}

int main () {
    int n;
    while (cin >> n) {
        if (es_multiple_3(n)) cout << "true" << endl;
        else cout << "false" << endl;
    }
}