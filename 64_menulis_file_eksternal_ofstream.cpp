#include <iostream>
#include <fstream> // ofstream, ifstream, fstream

using namespace std;

int main(){

    ofstream myFile;
    int a = 12345678;

    /*
        ios::out = default, operasi output
        ios::app = menuliskan pada akhir baris
        ios::trunc = default, membuat file jika tidak ada, dan kalau ada akan dihapus
    */

    myFile.open("64_menulis_file_eksternal_ofstream_1.txt");
    myFile << "ini adalah file eksternal.\ndan ini adalah baris kedua.\n\ndata";
    myFile << "\nNo  Nama\n1   Ibra";
    myFile << "\n2   Mukhlis";
    myFile << "\n3   Ucup";
    myFile << "\n4   Mario";
    myFile << "\n5   Sandra";
    myFile.close();
    
    myFile.open("64_menulis_file_eksternal_ofstream_2.txt", ios::app); // append
    myFile << "\nmenuliskan baris baru pada data2\n";
    myFile << a;
    myFile.close();

    return 0;
}