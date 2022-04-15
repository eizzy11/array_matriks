#include <iostream>

using namespace std;

float A[7][4];
float B[4][9];

float C[4][7];
float D[9][4];

int main () {
    
    cout << "Masukkan elemen matrik A : " << endl;

    for (int x = 0; x < 7; x++) {
        for (int y = 0; y < 4; y++) {
            cout << "Elemen [" << x << "] [" << y << "] = ";
            cin >> A[x][y];
        }
    }

    cout << endl;

    cout << "Matriks A" << endl;

    for (int x = 0; x < 7; x++) {
        for (int y = 0; y < 4; y++) {
            cout << A[x][y] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Hasil transpose matrik A" << endl;

    for (int m = 0; m < 7; m++) {
        for (int n = 0; n < 4; n++) {
            C[n][m] = A[m][n];
        }
    }

    for (int m = 0; m < 4; m++) {
        for (int n = 0; n < 7; n++) {
            cout << C[m][n] << " ";
        }
        cout << endl;
    }

    cout << endl << endl << endl;

    cout << "Masukkan elemen matrik B : " << endl;

    for (int x = 0; x < 4; x++) {
        for (int y = 0; y < 9; y++) {
            cout << "Elemen [" << x << "] [" << y << "] = ";
            cin >> B[x][y];
        }
    }

    cout << endl;

    cout << "Matriks B" << endl;

    for (int x = 0; x < 4; x++) {
        for (int y = 0; y < 9; y++) {
            cout << B[x][y] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Hasil transpose matrik B" << endl;

    for (int m = 0; m < 4; m++) {
        for (int n = 0; n < 9; n++) {
            D[n][m] = B[m][n];
        }
    }

    for (int m = 0; m < 9; m++) {
        for (int n = 0; n < 4; n++) {
            cout << D[m][n] << " ";
        }
        cout << endl;
    }

}