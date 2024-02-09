#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int size = 3; 
    int matrix[size][size]; 

    
    srand(time(0)); 
    cout << "Matrix:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = rand() % 100; 
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    
    cout << "Elements on the main diagonal: ";
    for (int i = 0; i < size; ++i) {
        cout << *(*(matrix + i) + i) << " ";
    }
    cout << endl;

    
    cout << "Elements on the secondary diagonal: ";
    for (int i = 0; i < size; ++i) {
        cout << *(*(matrix + i) + (size - 1 - i)) << " ";
    }
    cout << endl;

    
    int evenCount = 0;
    int oddCount = 0;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (*(*(matrix + i) + j) % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
    }

    cout << "Number of even elements: " << evenCount << endl;
    cout << "Number of odd elements: " << oddCount << endl;

    return 0;
}
