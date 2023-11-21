#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int m = 3;
    const int n = 4;

    int mas[m][n];

    srand(time(0));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            mas[i][j] = rand() % 100;
        }
    }

    cout << "Generated array: " << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << mas[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < m; ++i) {
        int sum = 0;
        for (int j = 0; j < n; ++j) {
            sum += mas[i][j];
        }
        cout << "Sum of elements in the string(row) " << i + 1 << ": " << sum << endl;
    }

    return 0;
}
