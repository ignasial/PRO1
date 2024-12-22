//recursive greatest common divisor
//feu una funció recursiva que calculi el mcd de dos naturals a i b utilitzant
//la versió ràpida de l'algorisme d'Euclides

#include <iostream>

using namespace std;


//pre: dos enters a i b no negatius i un dels dos major que 0 .
//post: un enter representant el mcd de a, b.
int mcd(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;
    if (a < b) {
        int p;
        p = a;
        a = b;
        b = p;
    }
    if (a%b == 0) return b;
    else {
        int z;
        z = a%b;
        a = b;
       return mcd(a, z);
    }
}

int main () {
    int a, b;
    while (cin >> a) {
        cin >> b;
        cout << mcd(a, b) << endl;
    }
}

