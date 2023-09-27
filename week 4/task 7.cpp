#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3, num4, num5;
        cout << "Enter the first fractional number: "; num1;
        cin >> num1;
        cout << "Enter the second fractional number: "; num2;
        cin >> num2;
        cout << "Enter the third fractional number: "; num3;
        cin >> num3;
        cout << "Enter the fourth fractional number: "; num4;
        cin >> num4;
        cout << "Enter the fifth fractional number: "; num5;
        cin >> num5;

    printf("%.2f\n", num1);
    printf("%.1f\n", num2);
    printf("%.2f\n", num3);
    printf("%.6f\n", num4);
    printf("%.2f\n", num5);

    return 0;
}

