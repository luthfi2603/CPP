#include <iostream>

using namespace std;

void print(int nilai){
    cout << nilai << "\n";
}

int main(){

    int a, b, c;

    a = (b = 1, print(b), c = 2, print(c), b + c);

    print(a);

    return 0;
}