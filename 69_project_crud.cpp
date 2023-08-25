#include <iostream>

using namespace std;

int getOption();

int main(){

    int pilihan = getOption();
    char isContinue;
    enum option {CREATE = 1, READ, UPDATE, DELETE, FINISH};

    while(pilihan != FINISH){
        switch(pilihan){
            case CREATE:
                cout << "Menambah data mahasiswa" << "\n";
                break;
            case READ:
                cout << "Tampilkan data mahasiswa" << "\n";
                break;
            case UPDATE:
                cout << "Ubah data mahasiswa" << "\n";
                break;
            case DELETE:
                cout << "Hapus data mahasiswa" << "\n";
                break;
            default:
                cout << "Pilihan tidak sesuai!" << "\n";
        }

        labelContinue:
        cout << "Lanjutkan?(y/n) : ";
        cin >> isContinue;
        if(isContinue == 'y'){
            pilihan = getOption();
        }else if(isContinue == 'n'){
            break;
        }else{
            goto labelContinue;
        }
    }

    cout << "\nakhir dari program\n";

    return 0;
}

int getOption(){
    int input;
    system("CLS");
    cout << "Program CRUD data mahasiswa" << "\n";
    cout << "===========================" << "\n";
    cout << "1. Tambah data mahasiswa" << "\n";
    cout << "2. Tampilkan data mahasiswa" << "\n";
    cout << "3. Ubah data mahasiswa" << "\n";
    cout << "4. Hapus data mahasiswa" << "\n";
    cout << "5. Selesai" << "\n";
    cout << "===========================" << "\n";
    cout << "Pilih [1-5]? : ";
    cin >> input;
    return input;
}