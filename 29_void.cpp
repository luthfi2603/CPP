#include <iostream>
using namespace std;

void bawah (int q) {
    cout << endl;
}

void motif (int z) {
    cout << "x ";
}

int main () {

    int n = 5;
    int q, z;
    for (int a = 1; a <= n; a++) {
        for (int x = n; x >= a; x--) {
            motif (z);
        }
        bawah (q);
    }

    return 0;
}