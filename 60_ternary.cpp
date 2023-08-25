#include <iostream>

using namespace std;

int main(){

    // ternary = ?
    // kondisi ? hasil1 : hasil2

    int a, b;
    string hasil1, hasil2, output;

    hasil1 = "nyahaha";
    hasil2 = "hehehe";

    a = 5;

    cout << "masukkan angka : ";
    cin >> b;

    output = (a < b) ? hasil1 : hasil2;

    cout << "hasilnya : " << output;

    return 0;
}