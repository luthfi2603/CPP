/*
    array multidimensi (seperti matriks)
    int array[baris][kolom] = {isi nya}
*/
#include <iostream>

using namespace std;

void printArray(int *ptrArray, int baris, int kolom){
    int index = 0;
    for(int i = 0; i < baris; i++){
        cout << "[ ";
        for(int j = 0; j < kolom; j++){
            cout << *(ptrArray + index) << " ";
            index++;
        }
        cout << "]" << endl;
    }
}

int main(){

    const int baris = 3;
    const int kolom = 3;
    int arrayMD[baris][kolom] = {9,5,2,8,4,7,1,3,6};

    printArray(*arrayMD, baris, kolom);

    cout << endl << "[ " << arrayMD[0][0] << " " << arrayMD[0][1] << " " << arrayMD[0][2] << " ]" << endl;
    cout <<         "[ " << arrayMD[1][0] << " " << arrayMD[1][1] << " " << arrayMD[1][2] << " ]" << endl;
    cout <<         "[ " << arrayMD[2][0] << " " << arrayMD[2][1] << " " << arrayMD[2][2] << " ]" << endl;
    
    return 0;
}