// Версія, яка перехоплює виключення ділення на нуль
#include <iostream>
using namespace std;

const int DivideByZero = 111;

float internaldiv(float arg1, float arg2) {
    if (arg2 == 0.0)
        throw DivideByZero;
    return arg1 / arg2;
}

float div(float arg1, float arg2) {
    float result = internaldiv(arg1, arg2);
    return result;
}

int main() {
    float a, b;
    
    while (cin >> a >> b) {
        try {
            float result = div(a, b);
            cout << result << endl;
        } catch (int e) {
            if (e == DivideByZero)
                cout << "Your input is not valid. You can't divide by zero." << endl;
            else
                cout << "An unexpected error occurred." << endl;
        }
    }
    
    return 0;
}
