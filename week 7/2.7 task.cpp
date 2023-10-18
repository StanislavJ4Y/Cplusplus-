#include <iostream>
using namespace std;

int main(void) {
    double pi4 = 0.;
    long n;

    cout << "Enter the number of iterations: ";
    cin >> n;

    for (long i = 0; i < n; i++) {
        pi4 += (i % 2 == 0 ? 1: -1) * (1. / (2 * i + 1));
    }

    pi4 *= 4.;

    cout.precision(20);
    cout << "Pi = " << pi4 << endl;

    return 0;
}