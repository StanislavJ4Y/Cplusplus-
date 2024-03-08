#include <iostream>
#include <string>
using namespace std;
bool isLeap(int year) {
if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}
int main(void) {
for(int yr = 1995; yr < 2025; yr++)
cout << yr << " -> " << isLeap(yr) << endl;
return 0;
} 
