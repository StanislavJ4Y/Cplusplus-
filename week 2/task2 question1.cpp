#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int x;
    int y;
    double w;
    
    cout << "Enter x value: ";
    cin >> x;
    cout << "Enter y value: ";
    cin >> y;
    
    if (x <= 1) {
        w = 0.5 * cos(x) + 4 * x;
        }
    if (x < 0) {
        w = 0.25 * pow(x, 4) + 2 * pow(x, 2);
}
    if (x > 1) {
        w = (0.9 * pow(x, 1./2)) - (0.8 * x);
}
cout << "Result: " << w;
}
