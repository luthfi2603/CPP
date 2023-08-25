#include <iostream>
#include <string>

using namespace std;

int main(){

    string input;
    string nama_konstanta("ZeeroXc");

    while(true){
        cout << "tebak nickname : ";
        cin >> input;
        if(input == nama_konstanta){
            cout << "tebakan anda benar!";
            break;
        }
        cout << "tebakan anda salah!!!" << endl;
    }

    return 0;
}