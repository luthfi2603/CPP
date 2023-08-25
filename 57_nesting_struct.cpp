#include <iostream>

using namespace std;

struct Aktor {
    string nama;
    int tahun_lahir;
};

struct Film {
    string judul, genre;
    int tahun;
    // meletakkan struct Aktor
    Aktor pemeran_1;
    Aktor pemeran_2;
};

int main(){

    Aktor aktor1, aktor2;
    Film film1, film2;

    // buat aktor 1
    aktor1.nama = "Michael Jackson";
    aktor1.tahun_lahir = 1992;
    
    // buat aktor 2
    aktor2.nama = "Sandra Bulog";
    aktor2.tahun_lahir = 1995;

    // buat film 1
    film1.judul = "Pengabdi Wakanda";
    film1.genre = "Documenter";
    film1.tahun = 2018;
    film1.pemeran_1 = aktor1;
    film1.pemeran_2 = aktor2;
    
    // buat film 2
    film2.judul = "Guardian of the Galaxy";
    film2.genre = "action";
    film2.tahun = 2023;
    film2.pemeran_1 = aktor2;

    // output ke console
    cout << "Film : " << film1.judul << "\n";
    cout << "    genre : " << film1.genre << "\n";
    cout << "    tahun : " << film1.tahun << "\n";
    cout << "    pemeran : " << film1.pemeran_1.nama << "\n";
    cout << "        tahun lahir : " << film1.pemeran_1.tahun_lahir << "\n";
    cout << "    pemeran : " << film1.pemeran_2.nama << "\n";
    cout << "        tahun lahir : " << film1.pemeran_2.tahun_lahir << "\n\n";
    
    // output ke console
    cout << "Film : " << film2.judul << "\n";
    cout << "    genre : " << film2.genre << "\n";
    cout << "    tahun : " << film2.tahun << "\n";
    cout << "    pemeran : " << film2.pemeran_1.nama << "\n";
    cout << "        tahun lahir : " << film2.pemeran_1.tahun_lahir;

    return 0;
}