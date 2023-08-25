#include <iostream>

using namespace std;

int rekursifFaktorial(int a){
    if(a == 1){
        return a;
    }else{
        return a * rekursifFaktorial(a - 1);
    }
}

int main(){

    int angka;

    cout << "masukkan angka : ";
    cin >> angka;

    cout << "hasil " << angka << "! = " << rekursifFaktorial(angka);

    return 0;
}