#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#define maxNama 20
#define maxNIM 9

using namespace std;

struct Mahasiswa {
    string pk, NIM, nama, jurusan;
};

int getOption();
void checkDatabase();
void writeData(Mahasiswa &inputMahasiswa);
vector<Mahasiswa> readData();
void addDataMahasiswa();
void displayDataMahasiswa();

int main(){
    checkDatabase();

    int pilihan = getOption();
    char isContinue;
    enum option {CREATE = 1, READ, UPDATE, DELETE, FINISH};

    while(pilihan != FINISH){
        switch(pilihan){
            case CREATE:
                cout << "\nMenambah data mahasiswa" << "\n";
                cout << "Max 20 character untuk nama" << "\n";
                cout << "Max 9 character untuk NIM" << "\n";
                addDataMahasiswa();
                break;
            case READ:
                cout << "\nTampilkan data mahasiswa" << "\n";
                displayDataMahasiswa();
                break;
            case UPDATE:
                cout << "\nUbah data mahasiswa" << "\n";
                break;
            case DELETE:
                cout << "\nHapus data mahasiswa" << "\n";
                break;
            default:
                cout << "\nPilihan tidak sesuai!" << "\n";
        }

        labelContinue:
        cout << "\nLanjutkan?(y/n) : ";
        cin >> isContinue;
        if(isContinue == 'y'){
            pilihan = getOption();
        }else if(isContinue == 'n'){
            break;
        }else{
            goto labelContinue;
        }
    }

    cout << "\nAkhir dari program\n";

    return 0;
}

int getOption(){
    int input;
    
    system("CLS");
    cout << "Program CRUD Data Mahasiswa" << "\n";
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

void checkDatabase(){
    ifstream data("69_database.csv");
    // check file ada atau tidak
    if(!data.is_open()){
        data.close();
        ofstream data;
        data.open("69_database.csv");
        data << "PK,NIM,Nama,Jurusan";
        data.close();
    }
    data.close();
}

void writeData(Mahasiswa &inputMahasiswa){
    ofstream data("69_database.csv", ios::app);
    data << "\n" << inputMahasiswa.pk << "," << inputMahasiswa.NIM << "," << inputMahasiswa.nama << "," << inputMahasiswa.jurusan;
    data.close();
}

vector<Mahasiswa> readData(){
    ifstream data("69_database.csv");
    Mahasiswa dat;
    vector<Mahasiswa> simpan;
    string temp, dataa;
    getline(data, temp);

    while(getline(data, dataa)){
        stringstream pisah(dataa);
        getline(pisah, dat.pk, ',');
        getline(pisah, dat.NIM, ',');
        getline(pisah, dat.nama, ',');
        getline(pisah, dat.jurusan);
        simpan.push_back(dat);
    }

    data.close();
    
    return simpan;
}

void addDataMahasiswa(){
    Mahasiswa inputMahasiswa;
    string lastPk;
    int lastPkInt, jumlahInputan;

    vector<Mahasiswa> records = readData();
    if(records.empty()){
        inputMahasiswa.pk = "1";

        cout << "Nama : ";
        getline(cin, inputMahasiswa.nama);
        cout << "Jurusan : ";
        getline(cin, inputMahasiswa.jurusan);
        cout << "NIM : ";
        getline(cin, inputMahasiswa.NIM);

        writeData(inputMahasiswa);
    }else{
        for(auto i = records.begin(); i != records.end(); i++){
            lastPk = i->pk;
        }
        istringstream(lastPk) >> lastPkInt;
        lastPkInt++;
        lastPk = to_string(lastPkInt);
        inputMahasiswa.pk = lastPk;

        cout << "Nama : ";
        getline(cin, inputMahasiswa.nama);
        jumlahInputan = inputMahasiswa.nama.size();
        if(jumlahInputan < maxNama){
            for(int i = 0; i < (maxNama - jumlahInputan); i++){
                inputMahasiswa.nama += " ";
            }
        }else if(jumlahInputan > maxNama){
            inputMahasiswa.nama = inputMahasiswa.nama.substr(0, 20);
        }

        cout << "Jurusan : ";
        getline(cin, inputMahasiswa.jurusan);

        cout << "NIM : ";
        getline(cin, inputMahasiswa.NIM);
        jumlahInputan = inputMahasiswa.NIM.size();
        if(jumlahInputan < maxNIM){
            for(int i = 0; i < (maxNIM - jumlahInputan); i++){
                inputMahasiswa.NIM += " ";
            }
        }else if(jumlahInputan > maxNIM){
            inputMahasiswa.NIM = inputMahasiswa.NIM.substr(0, 9);
        }

        writeData(inputMahasiswa);
    }
}

void displayDataMahasiswa(){
    int iterasi = 1;
    vector<Mahasiswa> records = readData();

    if(records.empty()){
        cout << "\nData masih kosong!" << "\n";
    }else{
        cout << "No\tPK\tNIM\t\tNama\t\t\tJurusan" << "\n";
        for(auto i = records.begin(); i != records.end(); i++){
            cout << iterasi << "\t";
            cout << i->pk << "\t";
            cout << i->NIM << "\t";
            cout << i->nama << "\t";
            cout << i->jurusan << "\n";
            iterasi++;
        }
    }
}