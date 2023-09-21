#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Enter a three-digit number: ";
    cin >> N;

    if (N < 100 || N > 999) {
        cout << "The entered number is not three-digit.\n";
        return 1;
    }

    int digit1 = N / 100;
    int digit2 = (N % 100) / 10;
    int digit3 = N % 10;


    int  product = 1;

    if (digit1 % 2 !=  0) {
        product *= digit1;
    }

    if (digit2 % 2 !=  0) {
        product *= digit2;
    }

    if (digit3 % 2 !=  0) {
        product *= digit3;
    }

    cout << "Decomposition of the number " << N << " into digits: " << digit1 << ", " << digit2 << ", " << digit3 << endl;
    cout << "Product of odd digits: " << product << endl;

    return 0;
}