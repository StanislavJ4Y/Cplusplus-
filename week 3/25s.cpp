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


    int firstDigit = N / 100;
    int lastDigit = N % 10;

    int swapNumber = lastDigit * 100 + (N % 100) - lastDigit + firstDigit;

    cout << "Number after swapping: " << swapNumber << endl;

    return 0;
}