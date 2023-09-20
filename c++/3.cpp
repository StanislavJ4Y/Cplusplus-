#include <iostream>
using namespace std;

int main() {
    int N;

    // Ask the user to input a three-digit number
    cout << "Enter a three-digit number: ";
    cin >> N;

    // Check if the input is a three-digit number
    if (N < 100 || N > 999) {
        cout << "The entered number is not three-digit.\n";
        return 1; // Return an error code
    }

    // Decompose the number into digits
    int digit1 = N / 100;
    int digit2 = (N % 100) / 10;
    int digit3 = N % 10;

    // Calculate the sum of digits greater than 5
    int sum = 0;

    if (digit1 > 5) {
        sum += digit1;
    }

    if (digit2 > 5) {
        sum += digit2;
    }

    if (digit3 > 5) {
        sum += digit3;
    }

    // Display the result
    cout << "Decomposition of the number " << N << " into digits: " << digit1 << ", " << digit2 << ", " << digit3 << endl;
    cout << "Sum of digits greater than 5: " << sum << endl;

    return 0;
}
