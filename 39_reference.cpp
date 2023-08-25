#include <iostream>
using namespace std;

int main(){

    // variabel
    int a = 5;

    cout << "address dari a " << &a << endl;
    cout << "  nilai dari a " << a << endl << endl;

    // reference
    int &b = a;

    cout << "address dari b " << &b << endl;
    cout << "  nilai dari b " << b << endl << endl;

    b = 10; // (mengubah nilai dari suatu address)
    cout << "  nilai dari a " << a << endl;
    cout << "  nilai dari b " << b << endl << endl;

    a = 50; // (mengubah nilai dari suatu address)
    cout << "  nilai dari a " << a << endl;
    cout << "  nilai dari b " << b << endl << endl;



    return 0;
}