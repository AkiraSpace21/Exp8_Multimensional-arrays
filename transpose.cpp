#include <iostream>
using namespace std;
int main() {
    int rows1, cols1;

    cout << "Enter number of rows for Matrix 1: ";
    cin >> rows1;
    cout << "Enter number of columns for Matrix 1: ";
    cin >> cols1;
    int matrix1[rows1][cols1], matrix2[cols1][rows1];
    cout << "Enter elements of Matrix 1:\n";
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            matrix2[j][i] = matrix1[i][j];
        }
    }

    cout << "\nOriginal Matrix:\n";
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cout << matrix1[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nTranspose of Matrix:\n";
    for (int i = 0; i < cols1; i++) {
        for (int j = 0; j < rows1; j++) {
            cout << matrix2[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
