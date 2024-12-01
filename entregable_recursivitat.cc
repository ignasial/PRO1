/*min-max expressions
Write a recursive function with the header int mmeval() that reads a min-max
 expression and evaluates it. The function does not take any parameters because
  it must read the expression from the input. You can assume that the input is 
  always a well-formed min-max expression. Remember that, although the Judge 
  does not yet determine if the function is truly recursive, if you submit a 
  function that is not, the problem will be manually invalidated.
*/


#include <iostream>
#include <string>
using namespace std;

//pre: two integer numbers
//post: the minimum of both numbers
int min(int a, int b) {
    if (a > b) return b;
    else return a;
}
//pre: two integer numbers
//post: the maximum of both numbers
int max(int a, int b) {
    if (a > b) return a;
    else return b;
}
//pre: string telling us if we have to evaluate the max or min of two integers
//post: the max or min represented as an integer
int mmeval () {
    string s;
    cin >> s;
    if (s == "min") return min(mmeval(), mmeval());
    else if (s == "max") return max(mmeval(), mmeval());
    else return stoi(s);
}
//in function main, we just call function mmeval()
int main () {
    cout << mmeval() << endl;
}