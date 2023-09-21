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
    
    if (digit1 != 1 && digit1 != 9) {
        calculate++;
    }

    if (digit2 != 1 && digit1 != 9) {
        calculate++;
    }

    if (digit3 != 1 && digit1 != 9) {
        calculate++;
    }

    cout << "Decomposition of the number " << N << " into digits: " << digit1 << ", " << digit2 << ", " << digit3 << endl;
    cout << "Number of digits not equal to 1 or 9: " << calculate << endl;

    return 0;
}