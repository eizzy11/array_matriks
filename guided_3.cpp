#include <iostream>

using namespace std;

float matriksA[2][3] = {{1,2,3}, {4,5,6}};
float matriksB[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
float hasil[2][4];

int main () {
    cout << "Matrik A" << endl;
    for (int m = 0; m < 2; m++) {
        for (int n = 0; n < 3; n++) {
            cout << matriksA[m][n] << " ";
        }
        cout << endl;
    }

    cout << endl << endl;

    cout << "Matrik B" << endl;
    
    for (int m = 0; m < 3; m++) {
        for (int n = 0; n < 4; n++) {
            cout << matriksB[m][n] << " ";
        }
        cout << endl;
    }

    cout << endl << endl;

    for (int barishasil = 0; barishasil < 2; barishasil++) {
        for (int kolomhasil = 0; kolomhasil < 4; kolomhasil++) {
            for (int kali = 0; kali < 3; kali++) {
                hasil[barishasil][kolomhasil] = hasil[barishasil][kolomhasil] + (matriksA[barishasil][kali] * matriksB[kali][kolomhasil]);
            }
        }
    }

    cout << "Hasil" << endl;

    for (int baris =0; baris < 2; baris++) {
        for (int kolom = 0; kolom < 4; kolom++){
            cout << hasil[baris][kolom] << " ";
        }
        cout << endl;
    }

    return 0;
}