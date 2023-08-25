#include <iostream>
#include <string>

using namespace std;

int main(){

    string kalimat_input;

    // getline(cin, variabel)
    cout << "masukkan kalimat : ";
    getline(cin, kalimat_input);

    cout << "inputan anda : " << kalimat_input << "\n";

    // jumlah kata dari input
    int posisi = 0, jumlah = 0;

    while(true){
        posisi = kalimat_input.find(" ", posisi + 1);
        /* posisi + 1 itu berarti di mulai dari yang ketemu pertama kali terus ditambah 1 misalnya
        spasi ketemu di index ke 3 setelah itu looping selanjutnya dia mencari spasi dari posisi
        3 + 1 yaitu 4 makanya dia bisa mendapatkan spasi selanjutnya */
        jumlah++;
        /* saat posisi nya jadi -1 maka itu adalah kata terakhir */
        if(posisi < 0){
            break;
        }
    }

    cout << "jumlah kata : " << jumlah;

    return 0;
}