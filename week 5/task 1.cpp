#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;

    for(int i = 1; i <= 5; i++) {
        cout << "Enter the x argument: ";
        cin >> x;

        y = pow(sin(x), 5) + abs(5*x - 1.5);

        cout << "For x argument = " << x << ", y = " << y << endl;
    }

    return 0;
}