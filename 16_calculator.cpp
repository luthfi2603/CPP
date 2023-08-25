#include <iostream>
using namespace std;
int main () {

float x, y, z;
char k;

cout << "Selamat datang di program calculator\n \n";
cout << "Masukkan Angka Pertama: ";
cin >> x;
cout << "Masukkan operator +, -, x, / : ";
cin >> k;
cout << "Masukkan Angka Kedua : ";
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

cout <<"\nHasil Perhitungan : ";
cout << x << " " << k << " " <<y;
cout << " = " << z << "\n \n";
cout << "Terima Kasih" << endl;
return 0;
}