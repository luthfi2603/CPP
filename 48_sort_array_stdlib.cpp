#include <iostream>
#include <array>
#include <algorithm>

const size_t arraySize = 10;

void printArray(std::array <int, arraySize> &angka){
    std::cout << "Array : ";
    for(int &para : angka){
        std::cout << para << " ";
    }
    std::cout << std::endl;
}

void printArray(std::array <char, arraySize> &angka){ // overloading
    std::cout << "Array : ";
    for(char &para : angka){
        std::cout << para << " ";
    }
    std::cout << std::endl;
}

int main(){

    std::array <int, arraySize> angka = {4,2,6,7,5,9,1,0,3,8};
    std::array <char, arraySize> huruf = {'g','f','a','d','b','e','c','h','j','i'};

    printArray(angka);
    printArray(huruf);

    std::cout << std::endl;
    std::sort(angka.begin(), angka.end());
    printArray(angka);

    std::sort(huruf.begin(), huruf.end());
    printArray(huruf);

    return 0;
}