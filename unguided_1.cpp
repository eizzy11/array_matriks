#include <iostream>

using namespace std;

float A[2][2] = {{5,4},{3,8}};
float B[2][2] = {{25,13},{10,9}};
float adj[2][2], k[2][2], in[2][2], det;

int main () {
    cout << "Matrik A adalah : " << endl;

    for (int a = 0; a < 2; a++) {
        for (int b = 0; b < 2; b++) {
            cout << A[a][b] << "\t";
        }
        cout << endl;
    }

    det = A[0][0] * A[1][1] - A[0][1] * A[1][0];

    cout << "Determinan matrik A adalah : " << det << endl;

    k[0][0] = A[1][1];
    k[0][1] = A[1][0] * -1;
    k[1][0] = A[0][1] * -1;
    k[1][1] = A[0][0];   

    cout << "Adjoin matrik A adalah : " << endl;

    for (int m = 0; m < 2; m++) {
        for (int n = 0; n < 2; n++) {
            adj[m][n] = k[n][m];
            cout << adj[m][n] << "\t";
        }
        cout << endl;
    } 

    cout << "Invers dari matrik A adalah : " << endl;

    for (int m = 0; m < 2; m++) {
        for (int n = 0; n < 2; n++) {
            in[m][n] = (1/det) * adj[m][n];
            cout << in[m][n] << "\t";
        }
        cout << endl;
    }

    cout << endl << endl;

    cout << "==================================================" << endl;

    cout << "Matrik B adalah : " << endl;

    for (int a = 0; a < 2; a++) {
        for (int b = 0; b < 2; b++) {
            cout << B[a][b] << "\t";
        }
        cout << endl;
    }

    det = B[0][0] * B[1][1] - B[0][1] * B[1][0];

    cout << "Determinan matrik B adalah : " << det << endl;

    k[0][0] = B[1][1];
    k[0][1] = B[1][0] * -1;
    k[1][0] = B[0][1] * -1;
    k[1][1] = B[0][0];   

    cout << "Adjoin matrik B adalah : " << endl;

    for (int m = 0; m < 2; m++) {
        for (int n = 0; n < 2; n++) {
            adj[m][n] = k[n][m];
            cout << adj[m][n] << "\t";
        }
        cout << endl;
    } 

    cout << "Invers dari matrik B adalah : " << endl;

    for (int m = 0; m < 2; m++) {
        for (int n = 0; n < 2; n++) {
            in[m][n] = (1/det) * adj[m][n];
            cout << in[m][n] << "\t";
        }
        cout << endl;
    }

    return 0;
}