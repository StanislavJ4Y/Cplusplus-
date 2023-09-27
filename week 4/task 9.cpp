#include <iostream>
using namespace std;

int main(void) {
    int num1, num2, num3, num4;
    cout << "Enter four numbers (each in the range of 1 to 255): \n";
    cin >> num1 >> num2 >> num3 >> num4;

    if (num1 >= 1 && num1 <= 255 &&
        num2 >= 1 && num2 <= 255 &&
        num3 >= 1 && num3 <= 255 &&
        num4 >= 1 && num4 <= 255) {
            
        cout << num1 << "." << num2 << "." << num3 << "." << num4 << endl;
    } else {
        cout << "Invalid input. Numbers must be in range 1 to 255." << endl;
    }
    return 0;
}