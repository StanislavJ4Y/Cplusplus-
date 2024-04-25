#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class FlightBooking {
public:
    FlightBooking(int id, int capacity, int reserved);
    void printStatus(); // Метод для виведення статусу бронювання
    void addReservation(int n);
    void cancelReservation(int n);
private:
    int id;
    int capacity;
    int reserved;
};

FlightBooking::FlightBooking(int id, int capacity, int reserved) { // використовується для реалізації методів класу поза оголошенням самого класу.
    if (capacity < 0 || reserved < 0) {                            
        cout << "Error: capacity and reserved seats must be positive!" << endl;
        exit(1);
    }
    this->id = id;
    this->capacity = capacity;
    
    // Перевірка на перевищення 105% місткості
    if (reserved > capacity * 1.05) {
        cout << "Error: reservation limit exceeded (105% of capacity)!" << endl;
        exit(1); // Вихід з програми з кодом помилки
    }
    this->reserved = reserved;
}

void FlightBooking::printStatus() {
    double occupancyPercentage = (static_cast<double>(reserved) / capacity) * 100; // він використовується для перетворення цілого числа на число з плаваючою комою (тип double)
    cout << "Flight " << id << " : " << reserved << "/" << capacity << " (" << occupancyPercentage << "%) seats reserved" << endl;
}

void FlightBooking::addReservation(int n) {
    if (n < 0) {
        cout << "Cannot perform this operation" << endl;
        return;
    }
    int newReserved = reserved + n; // Обчислення нової кількості зарезервованих місць - удалити потім
    if (newReserved <= capacity * 1.05) { // перевірка обмеження бронювання до 105% місткості - удалити потім
        reserved = newReserved; // оновлена кількість зарезервованих місць - удалити потім
        cout << "Reservations added successfully." << endl;
    } else {
        cout << "Cannot perform this operation. Reservation limit exceeded (105% of capacity)." << endl;
    }
}

void FlightBooking::cancelReservation(int n) { 
    if (n < 0 || reserved - n < 0) {
        cout << "Cannot perform this operation" << endl;
        return;
    }
    reserved -= n; // віднімається кількість місць для скасування, оновлюючи кількість зарезервованих місць
    cout << "Reservations canceled successfully." << endl;
}

int main() {
    int reserved = 0, capacity = 0;
    cout << "Provide flight capacity: ";
    cin >> capacity;
    cout << "Provide number of reserved seats: ";
    cin >> reserved;
    FlightBooking booking(1, capacity, reserved);

    string command;
    int n;
    while (true) {
        cout << "Enter command (add/cancel/quit) and number of reservations: ";
        cin >> command;
        if (command == "add" || command == "cancel") {
            cin >> n;
            if (command == "add") {
                booking.addReservation(n);
            } else {
                booking.cancelReservation(n);
            }
        } else if (command == "quit") {
            break;
        } else {
            cout << "Invalid command. Please try again." << endl;
        }
    }

    booking.printStatus(); // Виведення статусу бронювання після виходу з циклу
    return 0;
}
