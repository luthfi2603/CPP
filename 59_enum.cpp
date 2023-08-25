#include <iostream>

using namespace std;

enum warna {
    merah, jingga, kuning, hijau = 5, biru, nila, ungu
};

int main(){

    warna kain;

    kain = merah;
    cout << kain << "\n";
    
    kain = nila;
    cout << kain << "\n";

    kain = ungu;

    if(kain == biru){
        cout << "warna kain adalah biru";
    }else if(kain == merah){
        cout << "warna kain adalah merah";
    }else{
        cout << "bukan warna yang dimaksud";
    }

    return 0;
}