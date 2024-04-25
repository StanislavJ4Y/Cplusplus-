#include <iostream>
#include <string>

using namespace std;

class FlightBooking {
public:
    FlightBooking(); // дозволяє створювати об'єкти класу без необхідності вказувати конкретні значення які вказані в конструкторі з параметрами

    FlightBooking(int id, int capacity, int reserved);

    void printStatus(); // Метод для виведення статусу бронювання
    void addReservation(int n);
    void cancelReservation(int n);
    int getID() const;

private:
    int id;        
    int capacity;   // Максимальна кількість місць на рейсі
    int reserved;  
};

class FlightManager {
public:
    FlightManager();
    bool createFlight(int id, int capacity); // Метод для створення нового рейсу
    bool deleteFlight(int id);
    bool addReservationToFlight(int id, int n);
    bool cancelReservationOnFlight(int id, int n);
    void printAllFlightsStatus(); // Метод для виведення статусу всіх рейсів

private:
    static const int MAX_FLIGHTS = 10;  // робить зміну глобольною, існує лише один екземпляр
    FlightBooking flights[MAX_FLIGHTS]; // створює масив об'єктів класу з розміром 10
    int numFlights;  // Поточна кількість рейсів
};

FlightBooking::FlightBooking() {
    id = 0;
    capacity = 0;
    reserved = 0;
}

FlightBooking::FlightBooking(int id, int capacity, int reserved) {
    this->id = id;
    this->capacity = capacity;
    this->reserved = reserved;
}

int FlightBooking::getID() const { // Метод для отримання ідентифікатора рейсу
    return id;
}

void FlightBooking::printStatus() {
    double occupancyPercentage = (static_cast<double>(reserved) / capacity) * 100; // обчислення місткості
    cout << "Flight " << id << " : " << reserved << "/" << capacity << " (" << occupancyPercentage << "%) seats reserved" << endl;
}

void FlightBooking::addReservation(int n) {
    if (n < 0) {
        cout << "Cannot perform this operation" << endl;
        return;
    }
    int newReserved = reserved + n; // обчислює нову кількість зарезервованих місць 
    if (newReserved <= capacity * 1.05) {
        reserved = newReserved;
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

FlightManager::FlightManager() {
    numFlights = 0;
}

bool FlightManager::createFlight(int id, int capacity) {
    if (numFlights >= MAX_FLIGHTS) {
        cout << "Error: maximum number of flights reached!" << endl;
        return false;
    }
    for (int i = 0; i < numFlights; ++i) {
        if (flights[i].getID() == id) {
            cout << "Error: flight with ID " << id << " already exists!" << endl;
            return false;
        }
    }
    flights[numFlights++] = FlightBooking(id, capacity, 0); // створює новий об'єкт рейсу та додає його до масиву рейсів
    cout << "Flight with ID " << id << " created successfully." << endl;
    return true;
}

bool FlightManager::deleteFlight(int id) {
    for (int i = 0; i < numFlights; ++i) {
        if (flights[i].getID() == id) {
            for (int j = i; j < numFlights - 1; ++j) {
                flights[j] = flights[j + 1];
            }
            numFlights--; // зменшення лічильника, щоб відображав нову кількість рейсів
            cout << "Flight with ID " << id << " deleted successfully." << endl;
            return true;
        }
    }
    cout << "Error: flight with ID " << id << " not found!" << endl;
    return false;
}

bool FlightManager::addReservationToFlight(int id, int n) {
    for (int i = 0; i < numFlights; ++i) {
        if (flights[i].getID() == id) {
            flights[i].addReservation(n);
            return true;
        }
    }
    cout << "Error: flight with ID " << id << " not found!" << endl;
    return false;
}

bool FlightManager::cancelReservationOnFlight(int id, int n) {
    for (int i = 0; i < numFlights; ++i) {
        if (flights[i].getID() == id) {
            flights[i].cancelReservation(n);
            return true;
        }
    }
    cout << "Error: flight with ID " << id << " not found!" << endl;
    return false;
}

void FlightManager::printAllFlightsStatus() {
    for (int i = 0; i < numFlights; ++i) {
        flights[i].printStatus();
    }
}

int main() {
    FlightManager manager;
    
    while (true) {
        cout << "Enter command (create/delete/add/cancel/quit) and parameters: ";
        string command;
        cin >> command;
        
        // Обробка введених команд
        if (command == "create") {
            int id, capacity;
            cin >> id >> capacity;
            manager.createFlight(id, capacity);
        } else if (command == "delete") {
            int id;
            cin >> id;
            manager.deleteFlight(id);
        } else if (command == "add") {
            int id, n;
            cin >> id >> n;
            manager.addReservationToFlight(id, n);
        } else if (command == "cancel") {
            int id, n;
            cin >> id >> n;
            manager.cancelReservationOnFlight(id, n);
        } else if (command == "quit") {
            break;
        } else {
            cout << "Invalid command. Please try again." << endl;
        }
    }

    // Виведення статусу всіх рейсів після завершення виконання команд
    manager.printAllFlightsStatus();
    
    return 0;
}
