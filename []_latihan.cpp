#include <bits/stdc++.h>

using namespace std;

int main(){
    int k, si, sj, pivot, tempSi, tempSi2, hasil = 0;
    string mulai, akhir, tempMulai;
    cin >> si >> sj >> k;
    tempSi2 = si;
    for(int i = 0; i < (sj - tempSi2 + 1); i++){
        si = tempSi2 + i;
        mulai = to_string(si);
        tempMulai = mulai;
        pivot = 0;
        for(int j = mulai.size() - 1; j >= 0 ; j--){
            mulai[j] = tempMulai[pivot];
            pivot++;
        }
        tempSi = stoi(mulai);
        if(abs(si - tempSi) % k == 0){
            hasil++;
        }
    }

    cout << hasil;
    
    return 0;
}