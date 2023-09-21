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


    int calculate = 0;

    if (digit1 > 5) {
        calculate++;
    }

    if (digit2 > 5) {
        calculate++;
    }

    if (digit3 > 5) {
        calculate += digit3;
    }

    cout << "Decomposition of the number " << N << " into digits: " << digit1 << ", " << digit2 << ", " << digit3 << endl;
    cout << "Number of digits greater than 5: " << calculate << endl;

    return 0;
}