#include <iostream>
using namespace std;

bool isPrime(int number) {
    if(number <= 1)
        return false; // числа 0 та 1 не є простими

    for (int i = 2; i * i <= number; i++) { 
        if (number % i == 0) 
            return false; // якщо знайдений дільник, то число не є простим
    }

    return true; // якщо немає дільників, число просте
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is a not prime number." << endl;

    return 0;
}