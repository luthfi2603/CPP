// preprocessing directive
#include <iostream>

// macro merubah nilai dengan nama
#define PI 3.14159265359
#define BAHASA "Indonesia"

// macro untuk fungsi
#define KUADRAT(X) (X * X)
#define MAX(A, B) ((A > B) ? A : B)

// akhir dari preprocessing directive

using namespace std;

int main(){
    cout << "Nilai PI = " << PI << "\n";
    cout << "Bahasa   = " << BAHASA << "\n";

    cout << "Kuadrat  = " << KUADRAT(5) << "\n";
    cout << "Max      = " << MAX(5, 10) << "\n";

    #undef BAHASA
    #define BAHASA "Inggris"

    cout << "Bahasa   = " << BAHASA << "\n";

    return 0;
}
// membuat file yang ekstensinya .p
// g++ -E 73_preprocessing_directive_macro_define_undef.cpp -o 73_preprocessing_directive_macro_define_undef.p