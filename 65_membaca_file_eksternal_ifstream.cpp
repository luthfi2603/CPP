/*
    ios::in = default
    ios::ate = mulai dari akhir file
    ios::binary = membaca file biner
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

    ifstream myFile;
    string output, buffer, nama;
    bool isData = false;
    int no, jumlah = 0;

    myFile.open("64_menulis_file_eksternal_ofstream_1.txt");
    while(!isData){
        getline(myFile, buffer);
        output.append("\n" + buffer);
        if(buffer == "data"){
            isData = true;
        }        
    }
    cout << output << "\n";

    getline(myFile, buffer);
    cout << buffer << "\n";

    while(!myFile.eof()){
        myFile >> no;
        myFile >> nama;

        cout << no << "   " << nama << "\n";
        jumlah++;
    }
    cout << "jumlah data : " << jumlah << "\n";
    myFile.close();

    return 0;
}