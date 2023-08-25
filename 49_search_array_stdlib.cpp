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

int main(){

    std::array <int, arraySize> angka = {4,2,6,7,5,9,1,0,3,8};
    printArray(angka);

    int angkaCari;
    bool ketemu;
    std::cout << "mencari angka dari array di atas : ";
    std::cin >> angkaCari;
    std::sort(angka.begin(), angka.end());
    ketemu = std::binary_search(angka.begin(), angka.end(), angkaCari);
    if(ketemu){
        std::cout << "Ketemu!";
    }else{
        std::cout << "Tidak Ketemu!";
    }

    return 0;
}