/* 
    semua yang dimulai dengan tanda # itu adalah sebuah preprocessing, maksudnya itu adalah pada line
    13 yang di cout adalah variabel pi yang dideklarasikan, dan variabel tersebut mempunyai address
    sedangkan pada line 15, yang di cout adalah PI yang merupakan definisi dari line 7, line 15 sama
    saja dengan cout << "Nilai PI = " << 3.14159265359 << "\n";, PI itu tidak mempunyai address
*/
#include <iostream>
#define PI 3.14159265359

using namespace std;

int main(){
    double pi = 3.14159265359;
    const double PI2 = 3.14159265359;

    cout << "Nilai pi    = " << pi << "\n";
    cout << "Address pi  = " << &pi << "\n";
    cout << "Nilai PI    = " << PI << "\n";
    cout << "Address PI  = " << "Tidak ada" << "\n";
    cout << "Nilai PI2   = " << PI2 << "\n";
    cout << "Address PI2 = " << &PI2 << "\n";

    return 0;
}