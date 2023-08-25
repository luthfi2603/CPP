#include <iostream>
using namespace std;
int main () {
    int x;
    cout << "Masukkan Nilai : ";
    cin >> x; 
    switch (x) {
        case 1:
        cout << "Hello World!" << endl;
        break;
        default:
        cout << "Bukan angka 1" << endl;
    }
    return 0;
}