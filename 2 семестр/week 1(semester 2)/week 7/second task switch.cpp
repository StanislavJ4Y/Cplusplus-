#include <iostream>
using namespace std;

bool isLeap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

int monthLength(int year, int month) {
    switch(month) {
        case 1:     // Січень
        case 3:     // Березень
        case 5:     // Травень
        case 7:     // Липень
        case 8:     // Серпень
        case 10:    // Жовтень
        case 12:    //Грудень
            return 31;
        case 4:     // Квітень
        case 6:     // Червень
        case 9:     // Вересень
        case 11:    // Листопад
            return 30;
        case 2:     // Лютий
            if (isLeap(year)) 
                return 29;
            else 
                return 28;
        default:
            return -1; // Некоректний номер місяця
    }
}

int main(void) {
    for(int yr = 2000; yr < 2002; yr++) {
        for(int mo = 1; mo <= 12; mo++)
            cout << monthLength(yr,mo) << " ";
        cout << endl;
    }
    return 0;
}