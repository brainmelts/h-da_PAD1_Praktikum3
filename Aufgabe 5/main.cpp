// Euklidischer Algorithmus
// Autor: Suayb Yurdakul
// Datum: 2018-11-13

#include <iostream>
using namespace std;

// Iterativ

int gcdIterativeMod(int p, int q) {
    while (q != 0) {
        int r = (p % q);
        p = q;
        q = r;
    }
    return p;
}

int gcdIterativeSub(int p, int q) {
    if (p == 0) {
        return q;
    }
    else {
        while (q != 0) {
            if (p > q) p -= q;
            else q -= p;
        }
        return p;
    }
}

// Rekursiv

int gcdRecursiveMod(int p, int q) {
    if (q == 0) return p;
    else return gcdRecursiveMod(q, (p % q));
}

int gcdRecursiveSub(int p, int q) {
    if (q == 0) {
        return p;
    }
    else if (p == 0) {
        return q;
    }
    else {
        if (p > q) return gcdRecursiveSub(p - q, q);
        else return gcdRecursiveSub(p, q - p);
    }
}

int main() {
    int p=1071, q=1029;

    cout << "Modulo Iterativ\t" << gcdIterativeMod(p, q) << "\n";
    cout << "Minus Iterativ\t" << gcdIterativeSub(p, q) << "\n";
    cout << "Modulo Rekursiv\t" << gcdRecursiveMod(p, q) << "\n";
    cout << "Minus Rekursiv\t" << gcdRecursiveSub(p, q) << "\n";

    return 0;
}