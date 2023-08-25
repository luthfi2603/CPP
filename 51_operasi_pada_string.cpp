#include <iostream>
#include <string>

using namespace std;

int main(){

    string kata("cat");

    // menampilkan data string
    cout << kata << endl << endl;

    // mengambil karakter berdasarkan index
    cout << "index 0 : " << kata[0] << endl;
    cout << "index 1 : " << kata[1] << endl;
    cout << "index 2 : " << kata[2] << endl << endl;

    // merubah karakter pada index
    kata[1] = 'e';
    cout << kata << endl << endl;

    // menyambung, concatenation
    string kata2(kata + "ar");
    cout << kata2 << endl << endl;
    
    string kata3("membahana");
    kata2.append(" " + kata3);
    cout << kata2 << endl << endl;

    string kata4("ahay!!!");
    kata2 += " " + kata4;
    cout << kata2 << endl << endl;

    return 0;
}