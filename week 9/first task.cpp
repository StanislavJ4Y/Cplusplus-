#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    const int SIZE = 12;
    int arr[SIZE];

    srand(time(0));

    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100;
    }

    cout << "Array before sorting: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    for (int i = 1; i < SIZE; i++) {
        for (int j = i; j > 0 && arr[j] < arr[j - 1]; j--) {
            swap(arr[j], arr[j - 1]);
        }
    }

    cout << "\nArray in ascending order: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    for (int i = 0; i < SIZE / 2; i++) {
        swap(arr[i], arr[SIZE - i - 1]);
    }

    cout << "\nArray in descending order: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
