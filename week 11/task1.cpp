#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int mas[4][3] = {
        {22, 16, 0},
        {1, 17, 9},
        {89, 98, 62},
        {9, 3, 6}
    };

    for (int i = 0; i < 4; ++i)
    {
        int k = 0;

        for (int j = 0; j < 3; ++j)
        {
            if (mas[i][j] % 2 == 0)
            {
                k++;
            }
        }

        cout << "Number of even numbers in the string: " << "k = " << k << endl;
    }

    return 0;
}
