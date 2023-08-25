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

void ambilData2(int posisi, fstream &myFile){
    Mahasiswa bufferData;
    myFile.seekg((posisi - 1) * sizeof(Mahasiswa), ios::beg);
    myFile.read(reinterpret_cast<char*>(&bufferData), sizeof(Mahasiswa));
    cout << bufferData.NIM << "\n";
    cout << bufferData.nama << "\n";
    cout << bufferData.jurusan << "\n\n";
}

void menulisData(Mahasiswa &data, fstream &myFile){
    myFile.write(reinterpret_cast<char*>(&data), sizeof(Mahasiswa));
}

void menulisDataByPos(int posisi, Mahasiswa &data, fstream &myFile){
    myFile.seekp((posisi - 1) * sizeof(Mahasiswa), ios::beg);
    myFile.write(reinterpret_cast<char*>(&data), sizeof(Mahasiswa));
}

int main(){

    Mahasiswa mahasiswa1, mahasiswa2, mahasiswa3, mahasiswa4, output, output2, output3, output4;
    fstream myFile;

    myFile.open("68_io_binary_file.bin", ios::out | ios::in | ios::trunc | ios::binary);
    mahasiswa1.NIM = 221402050;
    mahasiswa1.nama = "Luthfi";
    mahasiswa1.jurusan = "TI";
    
    mahasiswa2.NIM = 221402031;
    mahasiswa2.nama = "Rifqi";
    mahasiswa2.jurusan = "TI";
    
    mahasiswa3.NIM = 220702003;
    mahasiswa3.nama = "Bodut";
    mahasiswa3.jurusan = "elektro";
    
    mahasiswa4.NIM = 221301213;
    mahasiswa4.nama = "Izha Mahendra";
    mahasiswa4.jurusan = "pertanian";

    menulisData(mahasiswa1, myFile);
    menulisData(mahasiswa2, myFile);
    menulisData(mahasiswa3, myFile);
    menulisData(mahasiswa4, myFile);

    mahasiswa3.NIM = 221402137;
    mahasiswa3.jurusan = "TI";
    menulisDataByPos(3, mahasiswa3, myFile);

    /*for(int i = 1; i <= 4; i++){
        output = ambilData(i, myFile);
        cout << output.NIM << "\n";
        cout << output.nama << "\n";
        cout << output.jurusan << "\n\n";
    }*/
    
    /*for(int i = 1; i <= 4; i++){
        ambilData2(i, myFile);
    }*/

    /*ambilData2(1, myFile);
    ambilData2(2, myFile);
    ambilData2(3, myFile);
    ambilData2(4, myFile);*/

    output = ambilData(3, myFile);
    cout << output.NIM << "\n";
    cout << output.nama << "\n";
    cout << output.jurusan << "\n\n";
    
    output2 = ambilData(1, myFile);
    cout << output2.NIM << "\n";
    cout << output2.nama << "\n";
    cout << output2.jurusan << "\n\n";
    
    output3 = ambilData(4, myFile);
    cout << output3.NIM << "\n";
    cout << output3.nama << "\n";
    cout << output3.jurusan << "\n\n";
    
    output4 = ambilData(2, myFile);
    cout << output4.NIM << "\n";
    cout << output4.nama << "\n";
    cout << output4.jurusan << "\n";

    myFile.close();

    return 0;
}