#include <iostream>
using namespace std;

int main() {
    int product = 1;

    for (int i = 3; i <= 100; i += 3) {
        product *= i;
    }

    cout << "The product of numbers that are multiples of 3 and not greater than 100 is: " << product << endl;

    return 0;
}
