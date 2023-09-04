#include <iostream>
// #include <array>
#include <exception>

using namespace std;

int pembagian(int num, int denum){
    if(denum == 0){
        // throw "error : pembagi nol";
        throw overflow_error("error : pembagi nol");
    }
    return num / denum;
}

int main(){
    /* array<int, 5> a = {0, 1, 2, 3, 4};

    try {
        cout << a.at(5) << "\n";
    }catch(exception& e){
        cout << e.what() << "\n";
    } */

    /* try {
        throw "Sesuatu";
    }catch(const char* e){
        cout << e << "\n";
    } */

    int a, b, c;
    char is_continue;
    while(true){
        cout << "num : ";
        cin >> a;
        cout << "denum : ";
        cin >> b;
        
        try {
            c = pembagian(a, b);
            cout << "hasil : " << c << "\n";
        }/* catch(const char* e){
            cout << e << "\n";
        } */
        catch(exception& e){
            cout << e.what() << "\n";
        }
        salah:
        cout << "lanjut(y/n) : ";
        cin >> is_continue;
        if(is_continue == 78 || is_continue == 110){
            break;
        }else if(is_continue == 121 || is_continue == 89){
            continue;
        }else{
            cout << "input salah!" << "\n";
            goto salah;
        }
    }

    cout << "akhir dari program" << "\n";

    return 0;
}

/* 
1. syntax error (dikasih tahu oleh compiler nya)
    error ketika ada yang tidak sesuai dengan grammar bahasa nya
    misalnya kurang titik koma
2. linking error (kadang dikasih tahu kadang tidak)
    ketika kita hanya membuat prototipe sebuah fungsi tetapi fungsi nya tidak ada
3. non-error
    program yang tidak masuk akal
4. runtime error
    error ketika saat berjalannya program, ketika membagi sesuatu dengan 0
 */