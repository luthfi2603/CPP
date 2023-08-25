#include <iostream>
#include <bitset>
#include <string>

using namespace std;

void printBinary(unsigned short val, string nama){
    cout << nama << " = " << bitset<8>(val) << "\n";
}

int main(){

    unsigned short a = 6, b = 10, c;
    cout << "& - Bitwise AND" << "\n";
    c = a & b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");
    cout << "c = " << c << "\n";
    
    cout << "\n| - Bitwise OR" << "\n";
    c = a | b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");
    cout << "c = " << c << "\n";

    cout << "\n^ - Bitwise XOR" << "\n";
    c = a ^ b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");
    cout << "c = " << c << "\n";
    
    cout << "\n~ - Bitwise NOT" << "\n";
    c = ~a;
    printBinary(a, "a");
    printBinary(c, "c");
    cout << "c = " << c << "\n";
    
    cout << "\n<< - Bitwise SHL" << "\n";
    c = a << 3;
    printBinary(a, "a");
    printBinary(c, "c");
    cout << "c = " << c << "\n";
    
    cout << "\n>> - Bitwise SHR" << "\n";
    c = b >> 2;
    printBinary(b, "b");
    printBinary(c, "c");
    cout << "c = " << c << "\n";

    return 0;
}
/* 
    bitwise operator
    & AND Bitwise AND
    | OR Bitwise inclusive OR
    ^ XOR Bitwise exclusive OR
    ~ NOT
    << SHL Shift bits left
    >> SHR Shift bits right
*/