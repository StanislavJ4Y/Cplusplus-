#include <iostream>
#include <string>

using namespace std;

class Square
{
private:
    double side;
    double area;

public:
    Square(double side); //конструктор приймає один аргумент - сторону квадрата // ініціалізує зміну під час оголошення
    void set_side(double side) // Метод для встановлення значення сторони квадрата
    {
        if (side > 0) {
        this->side = side; // присвоюю значення саме полю класу, а не локальній змінній.
        this->area = side * side;
        }
        else {
            exit(0);
        }
    };
    double get_side() {
        return side;
    }
    double get_area() {
        return area;
    }
    void print(); 
};

Square::Square(double side) //Square:: - це префікс, що вказує на те, що метод Square належить до класу Square.
{
    set_side(side); //щоб встановити значення сторони квадрата при створенні нового об'єкта.
}

void Square::print()
{
    cout << "Square: side = " << get_side() << " area = " << get_area() << endl;
}

int main()
{
    Square s(4);
    s.print();
    
    s.set_side(2.0);
    s.print();
    
    s.set_side(-33.0);
    s.print();
    
    return 0;
}