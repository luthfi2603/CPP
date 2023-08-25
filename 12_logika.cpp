#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    a = 1;
    b = 2;
    c = 3;

    bool hasil1, hasil2, hasil3;

    cout << "a = 1\n";
    cout << "b = 2\n";
    cout << "c = 3\n";
    cout << " " << endl;

    hasil1 = (a == 1) and (b == 2);
    hasil2 = (a == 2) or (b == 2);
    hasil3 = !(a == 1) ;

    cout << "a = 1 and b = 2 => " << hasil1 << endl;
    cout << "a = 2 or b = 2 => " << hasil2 << endl;
    cout << "!a = 1 => " << hasil3 << endl;

    return 0;
}