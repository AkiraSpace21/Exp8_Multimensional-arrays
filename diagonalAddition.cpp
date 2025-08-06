#include <iostream>
using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;

    cout << "Enter number of rows for Matrix 1: ";
    cin >> rows1;
    cout << "Enter number of columns for Matrix 1: ";
    cin >> cols1;

    cout << "Enter number of rows for Matrix 2: ";
    cin >> rows2;
    cout << "Enter number of columns for Matrix 2: ";
    cin >> cols2;

    if (rows1 != cols1 || rows2 != cols2 || rows1 != rows2) {
        cout << "Error: Diagonal addition requires both matrices to be square and of the same size.\n";
        return 1;
    }

    int matrix1[rows1][cols1], matrix2[rows2][cols2];

    cout << "Enter elements of Matrix 1:\n";
    for (int i = 0;i<rows1;i++) {
        for (int j=0;j<cols1;j++) {
            cout << "Element at [" <<i<< "][" <<j<< "]: ";
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of Matrix 2:\n";
    for (int i = 0;i<rows2;i++) {
        for (int j = 0; j < cols2; j++) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }

    cout << "\nMatrix 1:\n";
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cout << matrix1[i][j] << "\t";
        }
        cout << endl;
    }

  cout << "\nMatrix 2:\n";
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << matrix2[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nDiagonal Addition\n";
    for (int i = 0; i < rows1; i++) {
        int sum = matrix1[i][i]+matrix2[i][i];
        cout << "Element at [" <<i<< "][" <<i<< "]: " << sum<< endl;
    }

    return 0;
}
