#include <iostream>
#include <string>

using namespace std;

int main() {
    string paraula_1, paraula_2;
    cin >> paraula_1 >> paraula_2;

    if (paraula_1 < paraula_2) cout << paraula_1 << " < " << paraula_2 << endl;
    else if (paraula_1 > paraula_2) cout << paraula_1 << " > " << paraula_2 << endl;
    else cout << paraula_1 << " = " << paraula_2 << endl;
}
