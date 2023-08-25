#include <iostream>

using namespace std;

int main(){
    int n;
    string pilihan;

    while(true){
        cout << "Pilih segitiga (1/2) : ";
        cin >> pilihan;

        if(pilihan == "1"){
            cout << "Masukkan nilai n : ";
            cin >> n;

            for(int a = 1; a <= n; a++){
                for(int x = n; x > a; x--){
                    cout << "  ";
                }
                for(int y = 1; y <= (2*a-1); y++){
                    cout << "x ";
                }
                cout << endl;
            }

            break;
        }else if(pilihan == "2"){
            cout << "Masukkan nilai n : ";
            cin >> n;

            for(int a = 1; a <= n; a++){
                for(int x = n - 1; x >= a; x--){
                    cout << " ";
                }
                for(int y = 1; y <= a; y++){
                    cout << "x ";
                }
                cout << endl;
            }

            break;
        }
        else{
            cout << "Pilih 1 atau 2!" << endl;
        }
    }
    return 0;
}