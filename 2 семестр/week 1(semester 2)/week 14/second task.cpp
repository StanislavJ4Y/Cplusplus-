#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Fraction {
public:
    Fraction(int numerator, int denominator); 
    string toString(); // повертає рядкове представлення дробу
    double toDouble(); // перетворюємо дріб у десятковий дріб

private:
    int numerator; // Чисельник
    int denominator; // Знаменник
};

Fraction::Fraction(int numerator, int denominator) {
    // Перевіряємо, чи дріб від'ємний
    if ((numerator < 0 && denominator > 0) || (numerator > 0 && denominator < 0)) {
        this->numerator = -abs(numerator);
        this->denominator = abs(denominator);
    } else {
        this->numerator = abs(numerator);
        this->denominator = abs(denominator);
    }
}

string Fraction::toString() {
    if (denominator == 0) {
        return "Error: division by zero";
    }

    int wholePart = numerator / denominator; // ціла частина дробу
    int remainder = abs(numerator) % denominator; // остача від ділення
    string result;


    if (wholePart != 0) { // якщо є ціла частина, додаємо її до результуючого рядка
        result += to_string(wholePart);
        if (remainder != 0) result += " "; // розділяємо дріб і ціле число
    }

    if (remainder != 0) { // якщо існує залишок від ділення на знаменник
        result += to_string(remainder); // додаємо залишок до результуючого рядка
        result += "/"; 
        result += to_string(denominator); // Додаємо знаменник до результуючого рядка
    } else if (wholePart == 0) {
        result += "0"; // Якщо немає цілої частини і залишку, то це 0
    }

    if (numerator < 0 && wholePart == 0) result = "-" + result; // додаємо до результату знак мінус, якщо дріб від'ємний і ціла частина 0

    return result;
}

double Fraction::toDouble() {
    if (denominator == 0) {
        return NAN; 
    }
    return static_cast<double>(numerator) / denominator;
}

int main() {
    int num, den;
    char slash;
    
    cout << "Enter a common fraction (example 1/2): ";
    cin >> num >> slash >> den;

    Fraction fraction(num, den); // створення об'єкту з введеними значеннями
    double decimal = fraction.toDouble(); // перетворення дробу у десятковий вигляд
    if (isnan(decimal)) {
        cout << "Cannot divide by zero" << endl;
    } else if (decimal == floor(decimal)) {
        cout << fraction.toString() << " is " << decimal << ".0 in decimal" << endl;
    } else {
        cout << fraction.toString() << " is " << decimal << " in decimal" << endl;
    }

    return 0;
}
