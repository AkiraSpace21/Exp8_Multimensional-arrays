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

    if (cols1 != rows2) {
        cout << "Error: Matrix multiplication not possible. Columns of Matrix 1 must equal rows of Matrix 2.\n";
        return 1;
    }

    int matrix1[rows1][cols1], matrix2[rows2][cols2], result[rows1][cols2];

    cout << "Enter elements of Matrix 1:\n";
    for (int i = 0;i<rows1;i++) {
        for (int j = 0; j<cols1; j++) {
            cout << "Element at [" <<i<< "][" <<j<< "]: ";
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of Matrix 2:\n";
    for (int i=0; i<rows2; i++) {
        for (int j=0; j<cols2; j++) {
            cout << "Element at [" <<i<< "][" <<j<< "]: ";
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
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

    cout << "\nResultant Matrix (Matrix1 x Matrix2):\n";
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
