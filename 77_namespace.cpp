#include <iostream>
#include "77_otong.h"

void fungsi(){
    std::cout << "ini adalah fungsi biasa" << "\n";
}

// using namespace otong;
/* ketika kita membuat using namespace otong maka deklarasi fungsi() dan fungsi() yang ada di namespace
otong akan menjadi ambigu, maka kita harus mengganti salah satu namanya */

int main(){
    fungsi();
    std::cout << otong::b << "\n";
    otong::fungsi();
    otong::cout(1234567890);

    return 0;
}

/* 
    namespace itu gunanya untuk memberikan scope pada apa yang ingin kita gunakan
    gunanya namepace adalah supaya codingan kita lebih rapi ketika membuat sebuah fungsi
    dan dapat mendeklarasi fungsi yang sudah ada di library misalnya cout

    ketika kita menggunakan using namespace maka kita akan menghilangkan signature dari code kita
 */