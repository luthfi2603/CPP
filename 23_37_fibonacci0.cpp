#include <iostream>
using namespace std;
int main () {

//fn = f1 + f2
int n;
int fn;
int f1;
int f2;

cout << "Program Deret Fibonacci\n \n";
cout << "Masukkan Nilai Ke-n : ";
cin >> n;

f1 = 1;
f2 = 0;
cout << f1 << " ";
int x = 1;
while (x < n) {
fn = f1 + f2;
f2 = f1;
f1 = fn;
cout << fn << " ";
x++;
}

return 0;
}