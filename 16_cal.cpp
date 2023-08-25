#include <iostream>
using namespace std;
int main () {

    float x, y, z;
    char k;

    cout << "Selamat datang di program calculator... \n \n";
    cout << "Masukkan angka pertama : ";
    cin >> x;
    cout << "Masukkan operator +, -, x, / : ";
    cin >> k;
    cout << "Masukkan angka kedua : ";
    cin >> y;

    if (k == '+') {
        z = x + y;
    }
    else if (k == '-') {
        z = x - y;
    }
    else if (k == 'x') {
        z = x * y;
    }
    else if (k == '/') {
        z = x / y;
    }
    else {
        cout << "Bukan operator!";
    }

    cout << "\nHasil dari "<< x << " " << k << " " << y << " = " << z << endl;

    cout << "\nTerima Kasih..." << endl;
    return 0;
}