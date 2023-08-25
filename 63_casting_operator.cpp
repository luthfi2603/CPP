#include <iostream>

using namespace std;

int main(){

    int a = 5;
    float b = 3.14f;
    char c = 'c';

    cout << a + b << "\n";
    cout << a / b << "\n";
    cout << a * (int)b << "\n";
    cout << (char)(c + a) << "\n";
    cout << (int)((char)(a + b + 100)) << "\n";

    return 0;
}

/* 
    ketika kita menambahkan 2 variabel yang tipe data nya berbeda maka akan dilakukan implisit casting
    contoh int tambah float, maka nanti hasil akhirnya adalah float
 */