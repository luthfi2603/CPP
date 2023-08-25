#include <iostream>
#include <string>

using namespace std;

int main(){

    // array karakter tidak bisa kita tambah karena sudah fiks array

    string kata("Test");
    cout << kata << endl;

    string masukan;
    cout << "Masukkan kata : ";
    cin >> masukan;

    cout << "kata yang anda masukkan adalah : " << masukan;

    return 0;
}