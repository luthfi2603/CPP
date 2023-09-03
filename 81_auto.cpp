#include <iostream>
#include <typeinfo>

using namespace std;

template<typename T, typename U>
auto max(T a, U b){
    return (a > b) ? a : b;
} // nanti tipe data yang dipilih adalah tipe data dengan ukuran bit terbesar

int main(){
    int a = 16;
    string b = "test";
    double c = 15.432;
    float d = 14.5f;
    auto e = max(a, c);

    cout << "nilai a : " << a << ", tipe : " << typeid(a).name() << "\n";
    cout << "nilai b : " << b << ", tipe : " << typeid(b).name() << "\n";
    cout << "nilai c : " << c << ", tipe : " << typeid(c).name() << "\n";
    cout << "nilai d : " << d << ", tipe : " << typeid(d).name() << "\n";
    cout << "nilai e : " << e << ", tipe : " << typeid(e).name() << "\n";

    return 0;
}