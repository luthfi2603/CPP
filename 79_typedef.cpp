#include <iostream>

using namespace std;

int main(){
    // typedef adalah memberikan alias untuk tipe data
    typedef int I;
    typedef int iVector2D[2];
    typedef unsigned long ulong;
    typedef double vector[2];

    using numbers = double;

    I a = 10;
    // int b[2] = {1, 2};
    iVector2D b = {1, 2};
    // unsigned long c = 4294967295;
    ulong c = 4294967295;
    vector d = {123.456, 321.654};
    numbers e = 123.4567890;

    cout << "nilai a : " << a << "\n";
    cout << "nilai b : " << b[0] << " dan " << b[1] << "\n";
    cout << "nilai c : " << c << "\n";
    cout << "nilai d : " << d[0] << " dan " << d[1] << "\n";
    cout << "nilai e : " << e << "\n";

    return 0;
}