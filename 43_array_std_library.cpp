#include <iostream>
#include <array>

using namespace std;

int main(){

    // membuat array dengan standard library
    // array <int, jumlah_array> nama_array

    array <int, 5> nilai;

    for(int i = 0; i <=4; i++){
        nilai[i] = i;
        cout << "Nilai i[" << i << "] = " << nilai[i];
        cout << ", address : " << &nilai[i] << endl;
    }

    // Ukuran array
    cout << endl << "Ukuran array \t: " << nilai.size() << endl;

    // Nilai dengan index
    cout << "Nilai ke 3 \t\t: " << nilai.at(2) << endl;

    // Address awal dari array
    cout << "Address awal \t: " << nilai.begin() << endl;
    // printf("Address awal \t: %s\n", nilai.begin());

    // Address akhir dari array
    cout << "Address akhir \t: " << nilai.end();
    cout << " (Ini adalah address yang benar-benar terakhir.)" << endl;
    // printf("Address akhir \t: %s", nilai.end());

    return 0;
}