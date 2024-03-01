#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int rows = 3;
    const int cols = 3;

    int** matrix = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }

    srand(time(0));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = rand() % 21; 
        }
    }

    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Main diagonal: ";
    for (int i = 0; i < rows; ++i) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;

    cout << "Secondary diagonal: ";
    for (int i = 0; i < rows; ++i) {
        cout << matrix[i][cols - 1 - i] << " ";
    }
    cout << endl;

    int evenCount = 0;
    int oddCount = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
    }

    cout << "Number of even elements: " << evenCount << endl;
    cout << "Number of odd elements: " << oddCount << endl;

    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
