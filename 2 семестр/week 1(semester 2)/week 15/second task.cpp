#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class IPAddress {
protected:
    string ipAddress;

public:
    // Конструктор класу IPAddress, приймає рядок ip і ініціалізує поле ipAddress
    IPAddress(const string& ip) : ipAddress(ip) {}

    // Конструктор копіювання
    IPAddress(const IPAddress& other) : ipAddress(other.ipAddress) {}

    // Метод друку
    void print() const {
        cout << ipAddress;
    }
};

class IPAddressChecked : public IPAddress {
private:
    bool correct;

public:
    // Конструктор
    IPAddressChecked(const string& ip, bool isCorrect) : IPAddress(ip), correct(isCorrect) {} // це посилання на об'єкт, а не на його копію

    // Конструктор копіювання
    IPAddressChecked(const IPAddressChecked& other) : IPAddress(other), correct(other.correct) {} // посилання на константний об'єкт класу 

    void print() const {
        IPAddress::print();
        if (correct) {
    cout << " - Correct";
} else {
    cout << " - Not Correct";
}
    }
};

int main() {
    string ip1, ip2, ip3;

    cout << "Enter three IP addresses:" << endl;
    cin >> ip1 >> ip2 >> ip3;

    // Створення об'єктів
    IPAddress ipAddr(ip1);
    IPAddressChecked ipCheckedisFalse(ip2, false); 
    IPAddressChecked ipCheckedisTrue(ip3, true); 

    cout << "IP Address 1: ";
    ipAddr.print();
    cout << endl;

    cout << "IP Address 2: ";
    ipCheckedisFalse.print();
    cout << endl;

    cout << "IP Address 3: ";
    ipCheckedisTrue.print();
    cout << endl;

    return 0;
}
