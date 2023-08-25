#include <iostream>
using namespace std;
int main () {


    // fn = f1 + f2

    int x, n, f1, f2, fn;

    cout << "Masukkan nilai ke-n : ";
    cin >> n;
    
    f2 = 0;
    f1 = 1;
    x = 1;
    
    cout << f1 << " " << endl;

    while (x < n) {
        fn = f1 + f2;
        f2 = f1;
        f1 = fn;
        cout << fn << " " << endl;
        x++;
    }

    return 0;
}