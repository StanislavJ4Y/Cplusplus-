#include <iostream>
using namespace std; 

class AdHocSquare {
public:
    AdHocSquare(double side) { // Конструктор класу приймає параметр side, який встановлює довжину сторони квадрата.
    this->side = side;
} 

    void set_side(double side) { // метод дозволяє змінити довжину сторони квадрата
        this->side = side;
    }

    double get_area() { // метод обчислює і повертає площу квадрата
        return side * side;
    }

private:
    double side; // зберігає довжину сторони квадрата.
};

class LazySquare {
public:
    LazySquare(double side) {
    this->side = side;
    area = 0;
    side_changed = true;
}

    void set_side(double side) { // метод дозволяє змінити довжину сторони квадрата
        this->side = side;
        side_changed = true; // встановлює ознаку зміни сторони.
    }

    double get_area() { // Метод, що повертає площу квадрата.
        if (side_changed) { 
            area = side * side; 
            side_changed = false;
        }
        return area;
    }

private:
    double side;
    double area;
    bool side_changed;
};

int main() {
    
    AdHocSquare adhoc(6.0);
    cout << "AdHocSquare area: " << adhoc.get_area() << endl;
    adhoc.set_side(7.0);
    cout << "AdHocSquare area after side change: " << adhoc.get_area() << endl;

    LazySquare lazy(15.0);
    cout << "LazySquare area: " << lazy.get_area() << endl;
    lazy.set_side(7.0);
    cout << "LazySquare area after side change: " << lazy.get_area() << endl;

    return 0;
}
