#include <iostream>

using namespace std;

int main(){

    // looping untuk array di c++ 11 ke atas
    /*
        for(deklarasi_variabel : nama_array){
            statement;
        }
    */

    int arrayNilai[10] = {0,1,2,3,4,5,6,7,8,9};

    cout << "address nya tidak berubah-ubah" << endl;
    for(int nilai : arrayNilai){
        cout << "address : " << &nilai << ", nilai nya : " << nilai << endl;
        nilai = 1; // tidak merubah array
    }

    // memanipulasi array menggunakan referensi
    cout << endl;
    for(int &nilaiRef : arrayNilai){
        nilaiRef *= 3;
    }

    cout << "address nya berubah-ubah sesuai dengan address array yang asli" << endl;
    for(int &nilaiRef : arrayNilai){
        cout << "address : " << &nilaiRef << ", nilai nya : " << nilaiRef << endl;
    }

    return 0;
}