// Create a program in C++ that reads a square matrix (2D array) of size N x N from the user and outputs its transposed version.
#include <iostream>
using namespace std;
int main() {
    int n; 
    cout << "Enter matrix size (N): ";
    cin >> n;
    int matrix[n][n];
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }
    cout << "\nOriginal Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\nTransposed Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[j][i] << " "; 
        }
        cout << "\n";
    }
    return 0;
}

