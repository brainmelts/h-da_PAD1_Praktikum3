// Euklidischer Algorithmus
// Autor: Suayb Yurdakul
// Datum: 2018-11-13

#include <iostream>
using namespace std;

int gcdIterative(int p, int q) {
    while (q != 0) {
        int r = (p % q);
        p = q;
        q = r;
    }
    return p;
}

int gcdRecursive(int p, int q) {
    if (q == 0) return p;
    else return gcdRecursive(q, (p % q));
}

int main() {
    int p=1071, q=1029;

    cout << "Modulo Iterativ\t" << gcdIterative(p, q) << "\n";
    cout << "Modulo Rekursiv\t" << gcdRecursive(p, q) << "\n";

    return 0;
}