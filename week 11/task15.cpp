#include <iostream>
using namespace std;

int main()
{
    const int m = 3;
    const int n = 3;

    int mas[m][n] = {{55, 21, 53}, {48, 12, 6}, {77, 69, 47}};

    int sumMainDiagonal = 0;
    int sumSecondaryDiagonal = 0;

    for (int i = 0; i < m; ++i)
    {
        sumMainDiagonal += mas[i][i];
    }

    for (int i = 0; i < m; ++i)
    {
        sumSecondaryDiagonal += mas[i][n - 1 - i];
    }

    cout << "The sum along the main diagonal: " << sumMainDiagonal << endl;
    cout << "The sum on the side diagonal: " << sumSecondaryDiagonal << endl;

    return 0;
}
