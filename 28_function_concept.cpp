/**
 * Di function ada 3 tipe
 * 1. Pass-by-Value
 * - Contoh function tambah(int a, int b)
 * - Menyalin variabel atau objek, alias buat variabel atau objek baru
 * misal ada variabel c dan d jadi argumen untuk fungsi dengan penulisan
 * tambah(c, d)
 * berarti parameter fungsinya jadi a = c, berarti nilai a itu sama dengan c
 * - Tidak bisa ubah variabel asli
 * jika kita ubah nilai a di fungsi, maka nilai c tidak akan berubah
 * misal c nilainya 2
 * a = 1; maka
 * c itu nilainya tetap 2
 * 2. Pass-by-Reference
 * - Contoh function tambah(int &a, int &b)
 * - Membuat alias (nama panggilan)
 * misal ada variabel c dan d jadi argumen untuk fungsi dengan penulisan
 * tambah(c, d)
 * berarti parameter fungsinya jadi &a = c, berarti nilai a itu sama dengan c
 * Kalau di objek misal Mobil avanza
 * void cuciMobil(Mobil &mobil)
 * cuciMobil(avanza)
 * maka untuk akses mobil menggunakan .
 * mobil.warna;
 * - Bisa ubah variabel asli
 * jika kita ubah nilai a di fungsi, maka nilai c juga akan berubah
 * a = 1; maka
 * c itu nilainya jadi 1
 * 3. Pass-by-Pointer
 * - Contoh function tambah(int *a, int *b)
 * - Mengirim alamat memori (pointer)
 * misal ada variabel c dan d jadi argumen untuk fungsi dengan penulisan
 * tambah(&c, &d)
 * maksudnya kita kirimkan pointer dari variabel itu
 * berarti parameter fungsinya jadi *a = &c, berarti a itu adalah pointer dari variabel c
 * Kalau di objek misal Mobil avanza
 * void cuciMobil(Mobil *mobil)
 * cuciMobil(&avanza)
 * maka untuk akses mobil menggunakan ->
 * mobil->warna;
 * - Bisa ubah variabel asli
 * a itu isinya pointer misal 0xFFFFFFFF
 * jika kita ubah nilai a di fungsi, maka nilai c juga akan berubah
 * *a = 1; maka
 * c itu nilainya jadi 1
 */
#include <iostream>

using namespace std;

int tambah(int a, int b) {
    int c;
    c = a + b;

    return c;
}

int main() {
    int a, b, c;

    cout << "Return Function\n\n";

    cout << "Masukkan nilai a : ";
    cin >> a;

    cout << "Masukkan nilai b : ";
    cin >> b;

    c = tambah (a, b);
    cout << "\nHasil dari a + b = " << c;

    return 0;
}