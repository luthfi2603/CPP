#include <iostream>
#include <array>

using namespace std;

const int baris = 2;
const int kolom = 3;

void printArray(array <array <int, kolom> , baris> nilaiArray){
    for(array <int, kolom> vektorBaris : nilaiArray){
        cout << "[ ";
        for(int nilaiKolom : vektorBaris){
            cout << nilaiKolom << " ";
        }
        cout << "]" << endl;
    }
}

int main(){

    array <array <int, kolom> , baris> arrayMD = {0,1,2,3,4,5};

    printArray(arrayMD);

    return 0;
}