#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a natural number: ";
    cin >> N;

    int product = 1;
    bool EvenDigit = false;

    while (N > 0) {
        int digit = N % 10;
        if (digit % 2 == 0) {
            if (EvenDigit) {
                cout << " * ";
            }
            product *= digit;
            cout << digit;
            EvenDigit = true;
        }
        N /= 10;
    }

    if (EvenDigit) {
        cout << " = " << product << endl;
    } else {
        cout << "No even digits found." << endl;
    }

    return 0;
}
