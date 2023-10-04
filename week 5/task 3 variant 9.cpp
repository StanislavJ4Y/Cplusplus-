#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, h;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter h: ";
    cin >> h;

    cout << "-------------------" << endl;
    cout << ": X\t: Y\t:" << endl;
    cout << "-------------------" << endl;

    for (double x = a; x <= b; x += h) {
        if (x >= 0) {
            double y = sin(x) + sqrt(-x);
            cout << ": " << x << "\t: " << y << "\t:" << endl;
        }
        else {
            cout << "The value of x does not belong to the domain." << endl;
            break;
        }
    }

    cout << "-------------------" << endl;

    return 0;
}
