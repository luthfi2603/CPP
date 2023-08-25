#include <iostream>
using namespace std;
int main (){
    int a = 3;
    float b = 7;
    float hasil;
    hasil = a * b;
    cout << a << " x " << b << " = " << hasil << endl;
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;
    /* hasil = b % a;
    cout << b << " % " << a << " = " << hasil << endl; */
    hasil = a / b;
    cout << a << " / " << b << " = " << hasil << endl;
    return 0;
}