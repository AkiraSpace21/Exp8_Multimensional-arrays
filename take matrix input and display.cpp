#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    int matrix[3][3];  
    cout <<"Enter matrix elements:\n";
    for (int i= 0;i < rows;i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element at [" <<i<< "]["<<j<< "]: ";
            cin >> matrix[i][j];
        }
    }
     for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
            
        }
        cout << endl;
    }
    return 0;
}
