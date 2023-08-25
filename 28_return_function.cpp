#include <iostream>
using namespace std;

int tambah (int a, int b) {
    int c;
    c = a + b;
    return c;
}

int main () {

    cout << "\nReturn Function\n\n";

    int a, b, c;
    cout << "Masukkan nilai a : ";
    cin >> a;

    cout << "Masukkan nilai b : ";
    cin >> b;

    c = tambah (a, b);

    cout << "\nHasil dari a + b = " << c << endl;

    return 0;
}