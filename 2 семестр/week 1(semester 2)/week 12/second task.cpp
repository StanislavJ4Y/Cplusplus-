#include <iostream>
using namespace std;

class FlightBooking {
public:
    FlightBooking(int id, int capacity, int reserved);
    void printStatus();
private:
    int id;
    int capacity;
    int reserved;
};

FlightBooking::FlightBooking(int id, int capacity, int reserved) { // префікс вказує на те що метод є методом класу 
    if (capacity < 0 || reserved < 0) {                            // використовується для реалізації методів класу поза оголошенням самого класу.
        cerr << "Error: capacity and reserved seats must be positive!" << endl;
        exit(1); // Вихід з програми з кодом помилки
    }
    this->id = id;
    this->capacity = capacity;
    this->reserved = reserved;
}

void FlightBooking::printStatus() {
    double occupancyPercentage = (static_cast<double>(reserved) / capacity) * 100; // він використовується для перетворення цілого числа на число з плаваючою комою (тип double)
    cout << "Flight " << id << " : " << reserved << "/" << capacity << " (" << occupancyPercentage << "%) seats reserved" << endl;
}

int main() {
    int reserved = 0,
        capacity = 0;
    cout << "Provide flight capacity: ";
    cin >> capacity;
    cout << "Provide number of reserved seats: ";
    cin >> reserved;
    FlightBooking booking(1, capacity, reserved);
    booking.printStatus();
    return 0;
}

