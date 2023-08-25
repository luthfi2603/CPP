#include <iostream>
using namespace std;

int x = 10; // variabel global

int ambil_global () { // mengambil variabel global
    return x;
}

int x_local () {
    int x = 5; // variabel lokal scopenya x_local()
    return x;
}

int main () {
    cout << "variabel global = 10" << endl;
    cout << "variabel lokal = 8" << endl;
    cout << "variabel x_local = 5" << endl;
    cout << "variabel block = 1" << endl << endl;


    cout << "1. variabel global : " << x << endl;
    int x = 8; // variabel lokal untuk main
    cout << "2. variabel lokal main : " << x << endl;
    cout << "3. variabel ambil_global : " << ambil_global() << endl;
    cout << "4. variabel lokal main : " << x << endl;
    cout << "5. variabel x_local : " << x_local() << endl;
    cout << "6. variabel lokal main : " << x << endl;

    cout << "7. variabel lokal main : " << x << endl;
    {
        cout << "8. variabel lokal main : " << x << endl;
        // block scope
        int x = 1;
        cout << "9. variabel lokal block : " << x << endl;
        cout << "10. variabel ambil_global : " << ambil_global() << endl;
        cout << "11. variabel global : " << ::x << endl;
    }
    cout << "12. variabel lokal main : " << x << endl;

    cin.get();
    return 0;
}