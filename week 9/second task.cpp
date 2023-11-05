#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int arr[size];

    cout << "Enter " << size << " integers:" << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int maxElement = arr[0];

    for(int i = 1; i < size; i++){
        if(arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    for(int i = 0; i < size; i++){
        if(arr[i] < 0 && i < maxElement) {
            arr[i] = 0;
        }
    }

    cout << "Updated array:" << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}