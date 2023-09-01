#include <iostream>

using namespace std;

int main(){
    int n = -1;

    for(int i = 0; i < (sizeof(int) * 8 - 1); i++){
        n *= 2;
    }

    cout << n << "\n";

    return 0;
}