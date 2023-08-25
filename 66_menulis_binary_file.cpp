#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

    fstream myFile;
    int number = 12345;

    myFile.open("66_menulis_binary_file.bin", ios::out|ios::binary);
    myFile.write(reinterpret_cast<char*>(&number), sizeof(number));
    myFile.close();

    return 0;
}