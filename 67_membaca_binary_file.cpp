#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

    fstream myFile;
    int hasil;

    myFile.open("66_menulis_binary_file.bin", ios::in|ios::binary);
    myFile.read(reinterpret_cast<char*>(&hasil), sizeof(hasil));
    myFile >> hasil;
    cout << hasil << "\n";
    myFile.close();

    return 0;
}