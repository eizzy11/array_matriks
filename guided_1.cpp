#include <iostream>

using namespace std;

float matriksA[2][3];
float matriksB[2][3];
float hasil_matriks[2][3];

int main () {
    for (int baris = 0; baris < 2; baris++) {
        for (int kolom = 0; kolom < 3; kolom++) {
            matriksA[baris][kolom] = 11 + kolom + baris;
            matriksB[baris][kolom] = 13 + kolom + baris;
        }
    }

    for (int baris = 0; baris < 2; baris++) {
        for (int kolom = 0; kolom < 3; kolom++) {
            cout << matriksA[baris][kolom] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int baris = 0; baris < 2; baris++) {
        for (int kolom = 0; kolom < 3; kolom++) {
            cout << matriksB[baris][kolom] << " ";
        }
        cout << endl;
    }

    cout << endl << endl;

    cout << "Hasil penjumlahan matrik A dan matrik B" << endl;
    
    for (int baris = 0; baris < 2; baris++) {
        for (int kolom = 0; kolom < 3; kolom++) {
            cout << matriksA[baris][kolom] + matriksB[baris][kolom] << " ";
        }
        cout << endl;
    }

    return 0;
}