#include <iostream>
using namespace std;

int main() {
    char riverName;

    cout << "Enter the first letter of the name of a Ukrainian river: ";
    cin >> riverName;

    switch (toupper(riverName)) {
    {
    case 'H':
        cout << "River: Horyn" << endl;
        cout << "Length: 2,201 kilometers" << endl;
        cout << "Tributaries: 12 small" << endl;
        break;
    case 'D':
        cout << "River: Danube" << endl;
        cout << "Length: 2,900 kilometers" << endl;
        cout << "Tributaries: more than 300" << endl;
        break;
    case 'S':
        cout << "River: Southern Bug" << endl;
        cout << "Length: 806 kilometers" << endl;
        cout << "Tributaries: 1 large" << endl;
        break;
    case 'I':
        cout << "River: Inhul" << endl;
        cout << "Length: 354 kilometers" << endl;
        cout << "Tributaries: 6" << endl;
        break;
    case 'V':
        cout << "River: Vovcha" << endl;
        cout << "Length: 0,464 kilometers" << endl;
        cout << "Tributaries: 497 small rivers and streams" << endl;
        break;
     case 'T':
        cout << "River: Teteriv" << endl;
        cout << "Length: 0,385 kilometers" << endl;
        cout << "Tributaries: 6" << endl;
        break;
     case 'P':
        cout << "River: Pripyat" << endl;
        cout << "Length: 0,761 kilometers" << endl;
        cout << "Tributaries: 9" << endl;
        break;
    default:
        cout << "There is no data on rivers that begin with: '" << riverName << "'" << endl;
        break;
    }
    return 0;
}
}
