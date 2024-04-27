#include <iostream>
#include <string>

using namespace std;

class GymMember {
public:
    GymMember(); // дозволяє створювати об'єкти класу без необхідності вказувати конкретні значення які вказані в конструкторі з параметрами
    GymMember(int id, const string& firstName, const string& lastName); // посилання на об'єкт рядка

    int getID() const;
    string getFullName() const; 
    int getSubscriptionMonths() const; // повертає кількість місяців підписки користувача

    // відповідають за роботу з підпискою користувача в спортзалі.
    void extendSubscription(int months);
    void cancelSubscription();

private:
    int id;
    string firstName;
    string lastName;
    int subscriptionMonths;
};

class GymManager {
public:
    GymManager(); // конструктор за замовчуванням

    // команди для керування підписками
    bool createMember(int id, const string& firstName, const string& lastName);
    bool deleteMember(int id);
    bool extendSubscription(int id, int months);
    bool cancelSubscription(int id);
    void printAllMembers() const;

private:
    static const int MAX_MEMBERS = 10;
    GymMember members[MAX_MEMBERS];
    int numMembers;
};

GymMember::GymMember() { 
    id = 0;
    firstName = "";
    lastName = "";
    subscriptionMonths = 0;
}


GymMember::GymMember(int id, const string& firstName, const string& lastName) {
    this->id = id;                        // використовуємо ->this тільки для доступу до членів через вказівники на об'єкти класу
    this->firstName = firstName;          // використовуємо .this коли ви працюєте безпосередньо з об'єктом.
    this->lastName = lastName;
    this->subscriptionMonths = 0;
}

int GymMember::getID() const {
    return id;
}

string GymMember::getFullName() const {
    return firstName + " " + lastName;
}

int GymMember::getSubscriptionMonths() const {
    return subscriptionMonths;
}

void GymMember::extendSubscription(int months) {
    if (months > 0 && subscriptionMonths + months <= 12) {
        subscriptionMonths += months;
        cout << "Subscription extended successfully." << endl;
    } else {
        cout << "Invalid number of months or maximum subscription reached." << endl;
    }
}

void GymMember::cancelSubscription() {
    subscriptionMonths = 0;
    cout << "Subscription canceled successfully." << endl;
}

// Реалізація методів класу GymManager
GymManager::GymManager() {
    numMembers = 0; // початкове значення користувачів зареєстрованих в системі
}

bool GymManager::createMember(int id, const string& firstName, const string& lastName) {
    if (numMembers >= MAX_MEMBERS) {
        cout << "Error: maximum number of members reached!" << endl;
        return false; // Повертаємо false, щоб показати, що створення нового члена неможливе
    }
    for (int i = 0; i < numMembers; ++i) {
        if (members[i].getID() == id) { // Перевіряє, чи ідентифікатор поточного користувача співпадає з введеним ідентифікатором
            cout << "Error: member with ID " << id << " already exists!" << endl;
            return false; // створити користувача з таким ідентифікатором не можна.
        }
    }
    members[numMembers++] = GymMember(id, firstName, lastName);
    cout << "Member with ID " << id << " created successfully." << endl;
    return true;
}

bool GymManager::deleteMember(int id) {
    for (int i = 0; i < numMembers; ++i) {
        if (members[i].getID() == id) {
            for (int j = i; j < numMembers - 1; ++j) {
                members[j] = members[j + 1];
            }
            numMembers--;
            cout << "Member with ID " << id << " deleted successfully." << endl;
            return true; // позначити успішне видалення користувача.
        }
    }
    cout << "Error: member with ID " << id << " not found!" << endl;
    return false;
}

bool GymManager::extendSubscription(int id, int months) {
    for (int i = 0; i < numMembers; ++i) {
        if (members[i].getID() == id) {
            members[i].extendSubscription(months);
            return true;
        }
    }
    cout << "Error: member with ID " << id << " not found!" << endl;
    return false;
}

bool GymManager::cancelSubscription(int id) {
    for (int i = 0; i < numMembers; ++i) {
        if (members[i].getID() == id) {
            members[i].cancelSubscription();
            return true;
        }
    }
    cout << "Error: member with ID " << id << " not found!" << endl;
    return false;
}

void GymManager::printAllMembers() const {
    for (int i = 0; i < numMembers; ++i) {
        cout << "Member ID: " << members[i].getID() << ", Full Name: " << members[i].getFullName()
             << ", Subscription valid for: " << members[i].getSubscriptionMonths() << endl;
    }
}

int main() {
    GymManager manager;

    while (true) {
        cout << "Enter command (create/delete/extend/cancel/print/quit) and parameters: ";
        string command;
        cin >> command;

        if (command == "create") {
            int id;
            string firstName, lastName;
            cin >> id >> firstName >> lastName;
            manager.createMember(id, firstName, lastName);
        } else if (command == "delete") {
            int id;
            cin >> id;
            manager.deleteMember(id);
        } else if (command == "extend") {
            int id, months;
            cin >> id >> months;
            manager.extendSubscription(id, months);
        } else if (command == "cancel") {
            int id;
            cin >> id;
            manager.cancelSubscription(id);
        } else if (command == "print") {
            manager.printAllMembers();
        } else if (command == "quit") {
            break;
        } else {
            cout << "Invalid command. Please try again." << endl;
        }
    }

    return 0;
}
