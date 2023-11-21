#include <iostream>
#include <climits>
using namespace std;

int main() {
    const int m = 4;
    const int n = 7;

    int mas[m][n] = {{36, 12, 88, 15}, {4, 41, 17, 96}, {3, 28, 19, 99}};

    int maxElement = mas[0][0];
    int maxRow = 1, maxColumn = 1;

    for (int row = 0; row < m; ++row) {
        for (int column = 0; column < n; ++column) {
            if (mas[row][column] > maxElement) {
                maxElement = mas[row][column];
                maxRow = row + 1;
                maxColumn = column + 1;
            }
        }
    }

    cout << "Maximum element: " << maxElement << endl;
    cout << "Row number: " << maxRow << ", Column number: " << maxColumn << endl;

    return 0;
}
