#include <iostream>
#include <string>

using namespace std;

int main(){

    string kalimat_1("Dayat suka olahraga supaya sehat");
    string kalimat_2("Ucup suka makan pisang di pagi hari");

    cout << "1 : " << kalimat_1 << "\n";
    cout << "2 : " << kalimat_2 << "\n\n";

    // substring, mengambil string di tengah-tengah
    // substr(index, panjang)
    cout << kalimat_1.substr(11, 8) << " ";
    cout << kalimat_2.substr(16, 6) << "\n\n";

    // mencari posisi dari substring
    cout << "posisi olahraga : " << kalimat_1.find("olahraga") << endl;
    cout << "posisi pisang : " << kalimat_2.find("pisang") << endl << endl;

    int a = kalimat_1.find("ya");
    cout << a << endl;
    cout << kalimat_1.find("ya", a + 1) << "\n\n";

    // mencari posisinya dari belakang pakek rfind()
    cout << kalimat_2.rfind("an");

    return 0;
}