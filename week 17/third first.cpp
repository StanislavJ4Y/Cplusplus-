// Версія, що перевіряє аргументи та генерує виключення
#include <iostream>
using namespace std;

const int DivideByZero = 111; // ідентифікація винятку

float internaldiv(float arg1, float arg2) {
    if (arg2 == 0.0)
        throw DivideByZero;
    return arg1 / arg2;
}

float div(float arg1, float arg2) {
    if (arg2 == 0.0)
        throw "Your input is not valid. You can't divide by zero.";
    return internaldiv(arg1, arg2);
}

int main() {
    float a, b;
    
    while (cin >> a >> b) {
        try {
            float result = div(a, b);
            cout << result << endl;
        } catch (const char* error) {
            cout << error << endl;
        }
    }
    
    return 0;
}
