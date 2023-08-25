#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Mahasiswa {
    int pk;
    string NIM, nama, jurusan;
};

// int getOption();
// void checkDatabase(fstream &data);
// void writeData(fstream &data, int posisi, Mahasiswa &inputMahasiswa);
// int getDataSize(fstream &data);
// Mahasiswa readData(fstream &data, int posisi);
// void addDataMahasiswa(fstream &data);
// void displayDataMahasiswa(fstream &data, Mahasiswa &showMahasiswa);

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
    cin.ignore(10, '\n');
    return input;
}

void checkDatabase(fstream &data){
    data.open("69_database.bin", ios::out|ios::in|ios::binary);
    // check file ada atau tidak
    if(data.is_open()){
    }else{
        data.close();
        data.open("69_database.bin", ios::trunc|ios::out|ios::in|ios::binary);
    }
}

void writeData(fstream &data, int posisi, Mahasiswa &inputMahasiswa){
    data.seekp((posisi - 1) * sizeof(Mahasiswa), ios::beg);
    data.write(reinterpret_cast<char*>(&inputMahasiswa), sizeof(Mahasiswa));
}

int getDataSize(fstream &data){
    int start, end;
    data.seekg(0, ios::beg);
    start = data.tellg();
    data.seekg(0, ios::end);
    end = data.tellg();
    return (end - start) / sizeof(Mahasiswa);
}

Mahasiswa readData(fstream &data, int posisi){
    Mahasiswa readMahasiswa;
    data.seekg((posisi - 1) * sizeof(Mahasiswa), ios::beg);
    data.read(reinterpret_cast<char*>(&readMahasiswa), sizeof(Mahasiswa));
    return readMahasiswa;
}

void addDataMahasiswa(fstream &data){
    Mahasiswa inputMahasiswa, lastMahasiswa;
    int size = getDataSize(data);

    cout << "ukuran data : " << size << "\n";

    if(size == 0){
        inputMahasiswa.pk = 1;
    }else{
        // lastMahasiswa = readData(data, size);
        // cout << "pk      : " << lastMahasiswa.pk << "\n";
        // cout << "nama    : " << lastMahasiswa.nama << "\n";
        // cout << "jurusan : " << lastMahasiswa.jurusan << "\n";
        // cout << "nim     : " << lastMahasiswa.NIM << "\n";
        // exit(1);
        // inputMahasiswa.pk = lastMahasiswa.pk + 1;
        // cout << "pk : " << inputMahasiswa.pk << "\n";
    }

    inputMahasiswa.pk = 1;
    
    cout << "Nama : ";
    getline(cin, inputMahasiswa.nama);
    cout << "Jurusan : ";
    getline(cin, inputMahasiswa.jurusan);
    cout << "NIM : ";
    getline(cin, inputMahasiswa.NIM);

    cout << inputMahasiswa.pk << "\n";
    cout << inputMahasiswa.nama << "\n";
    cout << inputMahasiswa.jurusan << "\n";
    cout << inputMahasiswa.NIM << "\n";
    // exit(1);

    writeData(data, size + 1, inputMahasiswa);
}

void displayDataMahasiswa(fstream &data, Mahasiswa &showMahasiswa){
    int size = getDataSize(data);
    cout << "No\tPK\tNIM\tNama\tJurusan" << "\n";
    showMahasiswa = readData(data, 1);
    cout << "1" << "\t";
    cout << showMahasiswa.pk << "\t";
    cout << showMahasiswa.NIM << "\t";
    cout << showMahasiswa.nama << "\t";
    cout << showMahasiswa.jurusan << "\n";
    // for(int i = 1; i <= size; i++){
    //     showMahasiswa = readData(data, i);
    //     cout << i << "\t";
    //     cout << showMahasiswa.pk << "\t";
    //     cout << showMahasiswa.NIM << "\t";
    //     cout << showMahasiswa.nama << "\t";
    //     cout << showMahasiswa.jurusan << "\n";
    //     // cout << "\n";
    // }
}

int main(){

    fstream data;
    Mahasiswa test;

    checkDatabase(data);

    int pilihan = getOption();
    char isContinue;
    enum option {CREATE = 1, READ, UPDATE, DELETE, FINISH};

    while(pilihan != FINISH){
        switch(pilihan){
            case CREATE:
                cout << "Menambah data mahasiswa" << "\n";
                addDataMahasiswa(data);
                break;
            case READ:
                cout << "Tampilkan data mahasiswa" << "\n";
                test = readData(data, 1);
                cout << test.pk << "\n";
                cout << test.NIM << "\n";
                cout << test.nama << "\n";
                cout << test.jurusan << "\n";
                // displayDataMahasiswa(data, test);
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

    data.close();
    cout << "\nakhir dari program\n";

    return 0;
}