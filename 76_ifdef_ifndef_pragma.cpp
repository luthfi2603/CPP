#include <iostream>
#include "76_ifdef_ifndef_pragma3.h"
#include "76_ifdef_ifndef_pragma.h"
#include "76_ifdef_ifndef_pragma2.h"

/* #define FOO "FOO lama"

// ifdef
#ifdef FOO
#define TEST_FOO "Sudah didefinisikan"
#else
#define TEST_FOO "Belum didefinisikan"
#endif

// ifndef
#ifndef FOO
#define FOO "FOO baru"
#endif

// pragma once
#pragma once */

using namespace std;

int main(){
    // cout << TEST_FOO << "\n";
    // cout << FOO << "\n";

    Mahasiswa mhs;
    mhs.NIM = 221402050;
    cout << "NIM : " << mhs.NIM << "\n";

    return 0;
}