#include <iostream>
#include <cstdlib>
using namespace std;

void insertionSort(int arr[], int size);
void printArray(int arr[], int size);

int main() {
    const int SIZE = 13;
    int arr[SIZE];

    srand(time(0));

    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100; 
    }

    cout << "Array before sorting: ";
    printArray(arr, SIZE);

    insertionSort(arr, SIZE);

    cout << "\nArray in ascending order: ";
    printArray(arr, SIZE);

    for (int i = 0; i < SIZE / 2; i++) {
        swap(arr[i], arr[SIZE - i - 1]);
    }

    cout << "\nArray in descending order: ";
    printArray(arr, SIZE);

    return 0;
}

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
