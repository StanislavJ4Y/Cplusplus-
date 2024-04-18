#include <iostream>
#include <string>

using namespace std;

class ShopItemOrder {
public:
    // Конструктор для ініціалізації замовлення товару
    ShopItemOrder(const string& name, double pricePerUnit, int quantity) { // будемо працювати з оригінальним об'єктом рядка, а не з його копією
    setItemName(name);
    setPricePerUnit(pricePerUnit); // викликає метод, щоб встановити ціну за одиницю товару
    setQuantity(quantity);
}


    // Методи доступу для отримання та встановлення інформації про товар
    const string& getItemName() const { // цей метод повертає константне посилання на рядок itemName і не змінює стан об'єкта
        return itemName;
    }

    void setItemName(const string& name) { // приймає нову назву товару як аргумент і присвоює її змінній itemName, змінюючи таким чином назву товару.
        itemName = name;
    }

    double getPricePerUnit() const { // повертає значення змінної pricePerUnit, яке представляє ціну за одиницю товару.
        return pricePerUnit;
    }

    void setPricePerUnit(double price) { // встановлює нове значення змінної pricePerUnit, яке представляє нову ціну за одиницю товару
        pricePerUnit = price;
    }

    int getQuantity() const {
        return quantity;
    }

    void setQuantity(int qty) {
        quantity = qty;
    }

    // Метод для отримання загальної вартості замовлення
    double getTotalCost() const {
        return pricePerUnit * quantity; 
    }

    // Метод для друку замовлення
    void printOrder() const {
        cout << "Item: " << itemName << endl;
        cout << "Price per unit: $" << pricePerUnit << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total cost: $" << getTotalCost() << endl;
    }

private:
    string itemName;    // Назва товару
    double pricePerUnit;    // Ціна за одиницю товару
    int quantity;       // Кількість замовлених товарів
};

int main() {
    ShopItemOrder order("Iphone15", 999.99, 2);

    cout << "Order details:" << endl;
    order.printOrder();

    return 0;
}
