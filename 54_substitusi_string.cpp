#include <iostream>
#include <string>

using namespace std;

int main(){

    string kalimat_1("aku suka kamu suka, siapa? dia!");
    string kalimat_2("wakanda forevah!!!");

    cout << "1 : " << kalimat_1 << endl;
    cout << "2 : " << kalimat_2 << endl;

    // swap string
    kalimat_1.swap(kalimat_2);
    cout << "\nswap string\n";
    cout << "1 : " << kalimat_1 << endl;
    cout << "2 : " << kalimat_2 << endl;
    
    // replace string
    kalimat_2.replace(27, 3, "ibra");
    kalimat_1.replace(
        kalimat_1.find("ah"),
        2,
        "er"
    );
    cout << "\nreplace string\n";
    cout << "1 : " << kalimat_1 << endl;
    cout << "2 : " << kalimat_2 << endl;

    // insert string
    kalimat_1.insert(7, "-wakanda");
    cout << "\ninsert string\n";
    cout << "1 : " << kalimat_1 << endl;
    cout << "2 : " << kalimat_2 << endl;

    return 0;
}