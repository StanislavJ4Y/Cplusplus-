#include <iostream>
using namespace std;        
int main() {
    int a = 8, b = 0, c = 0;
    cout << "Enter a number: ";
    cin >> b;
    try { // викликати виняток
        if (b == 0) {
            throw "Your input is not valid, you can't divide by zero."; // генерує виняток
        }
        c = a / b;
        cout << c << endl;
    } catch (const char* error) { // обробляє виняток
        cout << error << endl;
    }
    return 0;
}
