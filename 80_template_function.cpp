#include <iostream>

using namespace std;

/* void print(int data){
    cout << data << "\n";
} */

template<typename T>
void print(T data){
    cout << data << "\n";
}

template<typename T>
int toInt(T data){
    return int(data);
}

template<typename T, typename U>
T max(T a, U b){
    return (a > b) ? a : b;
}

int main(){
    print(5);
    print(5.123);
    print('c');

    print(toInt(10.101010));

    print<int>(20.15);

    cout << max(10, 103.5) << "\n";
    cout << max<double, double>(10, 103.5) << "\n";

    return 0;
}