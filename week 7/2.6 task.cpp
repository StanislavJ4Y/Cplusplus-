#include <iostream>
using namespace std;

int main() {
    int c0, steps = 0;

    cout << "Enter the natural number: ";
    cin >> c0;

    while (c0 != 1) {
        if (c0 % 2 == 0) {
            c0 /= 2;
        } else {
            c0 = 3 * c0 + 1;
        }
        cout << c0 << endl;
        steps++;
    }

    cout << "Number of steps: " << steps << endl;

    return 0;
}
