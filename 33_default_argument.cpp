#include <iostream>
using namespace std;

double volume_kubus (double p = 1, double l = 1, double t = 1);
//void tampilkan (double z);

int main () {

    /*double p, l, t, hitung;
    cout << "Masukkan Nilai p : ";
    cin >> p;
    cout << "Masukkan Nilai l : ";
    cin >> l;
    cout << "Masukkan Nilai t : ";
    cin >> t;

    hitung = volume_kubus (p, l, t);

    tampilkan (hitung);*/

    cout << "p = 3\n";
    cout << "l = 4\n";
    cout << "t = 5\n\n";
    cout << "Default argumen = 1" << endl << endl;

    cout << "Volume kubus : " << volume_kubus(3,4,5) << endl;
    cout << "Volume kubus : " << volume_kubus(3,4) << endl;
    cout << "Volume kubus : " << volume_kubus(3) << endl;
    cout << "Volume kubus : " << volume_kubus() << endl;

    return 0;
}

double volume_kubus (double p, double l, double t) {
    return p * l * t;
}

/*void tampilkan (double z) {
    cout << "Volume dari kubus : " << z << endl;
}*/
