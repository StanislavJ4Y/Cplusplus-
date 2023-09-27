#include <iostream>
using namespace std;
int main(void) {
    int num1, num2;

    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    double result1 = 1.0 / static_cast<double>(num1);
    double result2 = 1.0 / static_cast<double>(num2);
    if (abs(result1 - result2) < 0.000001) {
        cout << "Results are equal (by 0.000001 epsilon)";
    } else{
        cout << "Results are not equal (by 0.000001 epsilon)";
    }
}

