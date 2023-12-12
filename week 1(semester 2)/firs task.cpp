#include <iostream>

using namespace std;
int main(void) {

    int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
    int n = sizeof(vector) / sizeof(vector[0]);

    int *ptr = vector;
    int *minPtr = ptr;

    for (int i = 0; i < n; i++) {
        if (*minPtr >* (ptr + i)) {
            minPtr = ptr + i;
        }
    }
        cout << "Minumum element is: " << *minPtr << " in our array." << endl;

    return 0;
}
