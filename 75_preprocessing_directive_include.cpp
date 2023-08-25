/* 
    g++ -E nama_file.cpp -o nama_file.p 
    include itu sebenaranya hanya menyalin semua yang ada di file lain ke dalam file yang diincludekan
*/
#include <iostream>
#include <string> // include library string masih 2 kali
#include "75_preprocessing_directive_include.h"    

#define PI 3.14159265359 // deklarasi PI 2 kali

using namespace std;

int main(){
    cout << "Berhasil" << "\n";
    cout << "PI = " << PI << "\n";
    cout << "KUADRAT = " << KUADRAT(7) << "\n";
    cout << "MAX = " << MAX(7, 10) << "\n";
    cout << "Data string : " << data << "\n";

    return 0;
}