#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Mahasiswa {
    int NIM;
    string nama, jurusan;
};

Mahasiswa ambilData(int posisi, fstream &myFile){
    Mahasiswa bufferData;
    myFile.seekg((posisi - 1) * sizeof(Mahasiswa), ios::beg);
    myFile.read(reinterpret_cast<char*>(&bufferData), sizeof(Mahasiswa));
    return bufferData;
}

int main(){

    Mahasiswa dataBaca, dataBaca2, dataBaca3, dataBaca4;
    fstream myFile;

    myFile.open("68_io_binary_file.bin", ios::in|ios::binary);

    dataBaca = ambilData(1, myFile);
    cout << dataBaca.NIM << "\n";
    // cout << dataBaca.nama << "\n";
    // cout << dataBaca.jurusan << "\n\n";
    
    dataBaca2 = ambilData(2, myFile);
    cout << dataBaca2.NIM << "\n";
    // cout << dataBaca2.nama << "\n";
    // cout << dataBaca2.jurusan << "\n\n";
    
    dataBaca3 = ambilData(3, myFile);
    cout << dataBaca3.NIM << "\n";
    // cout << dataBaca3.nama << "\n";
    // cout << dataBaca3.jurusan << "\n\n";
    
    dataBaca4 = ambilData(4, myFile);
    cout << dataBaca4.NIM << "\n";
    // cout << dataBaca4.nama << "\n";
    // cout << dataBaca4.jurusan << "\n";

    /*for(int i = 1; i <= 4; i++){
        cout << i << " ";
        dataBaca = ambilData(i, myFile);
        cout << dataBaca.NIM << "\n";
    }*/

    myFile.close();

    return 0;
}