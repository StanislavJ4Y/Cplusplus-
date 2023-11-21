#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int m = 6;
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

    for (int j = 0; j < n; ++j) {
        int countEven = 0;

        for (int i = 0; i < m; ++i) {
            if (mas[i][j] % 2 == 0) {
                countEven++;
            }
        }

        cout << "Number of even numbers in the column: " << j + 1 << countEven << endl;
    }

    return 0;
}
