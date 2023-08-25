#include <iostream>

using namespace std;

int main(){
    for(int i = 1; i <= 10; i++){
        if(i == 8){
            break;
            // continue;
        }

        cout << i << endl;
    }

    cout << "Akhir" << endl;

    return 0;
}

/*
    continue; hanya bisa di for, di while tidak bisa karena jika increment nya di bawah continue;
    maka akan diskip dan nilai pemberhenti nya tidak bisa ditambah
*/