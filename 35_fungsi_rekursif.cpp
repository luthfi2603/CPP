#include <iostream>

using namespace std;

int pangkatIterasi(int a, int b){
    int hasil = a;
    for(int i = 1; i < b; i++){
        hasil *= a;
    }
    return hasil;
}

// fungsi rekursif terbatas
int pangkatRekursif(int a, int b){
    if(b <= 1){
        cout << "akhir dari rekursif\n";
        return a;
    }else{
        cout << "rekursif\n";
        return a * pangkatRekursif(a, (b - 1));
    }
}

int main(){

    int a, b;

    cout << "angka : ";
    cin >> a;

    cout << "pangkat : ";
    cin >> b;

    cout << "hasil iterasi  = " << pangkatIterasi(a, b);
    cout << "\nhasil rekursif = \n" << pangkatRekursif(a, b);

    return 0;
}