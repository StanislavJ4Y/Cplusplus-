#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    const int m = 4;
    const int n = 6;

    int mas[m][n] = {{19, 10, 8, 26, 0, 4}, {73, 81, 95, 16, 64, 1}, {11, 44, 55, 76, 67, 55}, {1, 2, 3, 4, 5, 6}
    };

    for (int col = 0; col < n; ++col)
    {
        int sum = 0;

        for (int row = 0; row < m; ++row)
        {
            sum += mas[row][col];
        }

        cout << "Sum of elements in the column: " << col + 1 << ": " << sum << endl;
    }

    return 0;
}
