#include <iostream>
using namespace std;
int main(void) {
    int a = 0, b = 0, c = 0;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    try {
        if (b == 0) {
            throw "Your input is not valid, you can't divide by zero.";
        }
        c = a / b;
        cout << c << endl;
    } catch (const char* error) {
        cout << error << endl;
    }
    return 0;
}
