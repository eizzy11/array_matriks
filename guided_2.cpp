#include <iostream>

using namespace std;

float matriksA[7][9];
float matriksB[7][9];


int main () {
    for (int baris = 0; baris < 7; baris++) {
        for (int kolom = 0; kolom < 9; kolom++) {
            matriksA[baris][kolom] = 11 + kolom + baris;
            matriksB[baris][kolom] = 13 + kolom + baris;
        }
    }
    for (int baris = 0; baris < 7; baris++) {
        for (int kolom = 0; kolom < 9; kolom++) {
            cout << matriksB[baris][kolom] << " ";
        }
        cout << endl;
    }

    cout << endl << endl;

    cout << "Hasil pengurangan matrik A dan matrik B" << endl;
    
    for (int baris = 0; baris < 7; baris++) {
        for (int kolom = 0; kolom < 9; kolom++) {
            cout << matriksA[baris][kolom] - matriksB[baris][kolom] << " ";
        }

        cout << endl;
    }
    
    cout << endl;

    cout << "Hasil pengurangan matrik B dan matrik A" << endl;

    for (int baris = 0; baris < 7; baris++) {
        for (int kolom = 0; kolom < 9; kolom++) {
            cout << matriksB[baris][kolom] - matriksA[baris][kolom] << " ";  
        }

        cout << endl;
    }

    cout << endl;

    for (int baris = 0; baris < 7; baris++) {
        for (int kolom = 0; kolom < 9; kolom++) {
            cout << "[" << baris << "," << kolom << "]" << " ";
        }

        cout << endl;
    }


    return 0;
}