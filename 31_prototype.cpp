#include <iostream>
using namespace std;

double hitung_luas (double p, double l);

void tampilkan_luas (double z);

int main () {

    double p, l, luas;

    cout << "Masukkan nilai p : ";
    cin >> p;

    cout << "Masukkan nilai l : ";
    cin >> l;

    luas = hitung_luas (p, l);

    tampilkan_luas (luas);

    return 0;
}

double hitung_luas (double p, double l) {
    return p * l;
}

void tampilkan_luas (double z) {
    cout << "Luas dari p dan l dengan void adalah : " << z << endl;
}