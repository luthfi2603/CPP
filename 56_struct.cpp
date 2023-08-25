#include <iostream>

using namespace std;

struct Buah {
    string warna, rasa;
    int harga;
    float berat;
};

int main(){

    Buah apel;
    Buah jeruk;

    apel.warna = "merah";
    apel.rasa = "manis kesat";
    apel.berat = 250.50f;
    apel.harga = 50000;

    jeruk.warna = "orange";
    jeruk.rasa = "asam";
    jeruk.berat = 150.00f;
    jeruk.harga = 30000;

    cout << "buah : apel\n";
    cout << "- " << apel.warna << "\n";
    cout << "- " << apel.rasa << "\n";
    cout << "- " << apel.berat << "\n";
    cout << "- " << apel.harga << "\n\n";

    cout << "buah : jeruk\n";
    cout << "- " << jeruk.warna << "\n";
    cout << "- " << jeruk.rasa << "\n";
    cout << "- " << jeruk.berat << "\n";
    cout << "- " << jeruk.harga;

    return 0;
}