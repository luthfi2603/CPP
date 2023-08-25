#include <iostream>
using namespace std;

int fibonacci(int n);

int main(){
    int n, hasil;

    cout << "Menghitung fibonacci nilai ke : ";
    cin >> n;
    hasil = fibonacci(n);
    cout << "Nilai fibonaccinya adalah : " << hasil << endl;

    return 0;
}

int fibonacci(int n){
    cout << "Fungsi fibonacci " << n << endl;
    if((n == 0)||(n == 1)){
        return n;
    }else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}