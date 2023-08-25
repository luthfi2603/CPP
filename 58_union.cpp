#include <iostream>

using namespace std;

union Data {
    int a;
    char b[12];
};


int main(){

    Data data_union;

    data_union.a = 100;

    cout << "data a : " << sizeof(data_union.a) << " value : " << data_union.a << "\n";
    cout << "data b : " << sizeof(data_union.b) << " value : " << data_union.b << "\n\n";

    data_union.b[0] = 'a';
    data_union.b[1] = 'b';
    // data_union.b[2] = 'c';
    // data_union.b[3] = 'd';
    // data_union.b[4] = 'e';
    // data_union.b[5] = 'f';
    // data_union.b[6] = 'g';
    // data_union.b[7] = 'h';
    // data_union.b[8] = 'i';
    // data_union.b[9] = 'j';
    // data_union.b[10] = 'k';
    // data_union.b[11] = 'l';

    cout << "data a : " << sizeof(data_union.a) << " value : " << data_union.a << "\n";
    cout << "data b : " << sizeof(data_union.b) << " value : " << data_union.b << "\n";

    return 0;
}