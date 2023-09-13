#include <iostream>
using namespace std;

int main() {
    int x;
    int y;
    cout << "Enter x value: ";
    cin >> x;
    cout << "Enter y value: ";
    cin >> y;

    if (x >= 0 && x <= 3 && y >= 0 && y <= 1) {
        cout << "The coordinates of the rectangle are equal to: (" << x << ", " << y << ")" << endl;
    }
    else  {
    cout << "The coordinates don't go to the point: (" << x << "," << y <<")" << endl;
    }
    return 0;
}
