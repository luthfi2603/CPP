#include <iostream>
using namespace std;

void fungsi(int &);
void kuadrat(int &);

int main(){

    int a = 10;

    cout << "address dari a " << &a << endl;
    cout << "nilai dari a   " << a << endl << endl;

    fungsi(a);
    kuadrat(a);

    cout << endl;
    cout << "kuadrat dari a " << a << endl;

    return 0;
}

void fungsi(int &b){
    cout << "address dari b " << &b << endl;
    cout << "nilai dari b   " << b << endl;
}

void kuadrat(int &Refvalue){
    Refvalue = Refvalue * Refvalue;
}