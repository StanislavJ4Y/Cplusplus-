#include <iostream>
using namespace std;

void increment(int& var) { //приймає посилання на ціле число var (функція отримує доступ до самої змінної var)   Ця функція приймає посилання на цілочисельну змінну var
    var++; 
}
                                            //додатковий цілочисельний аргумент expression 
void increment(int& var, int expression) { // функція отримує лише копію значення expression, яке не впливає на оригінальне значення expression у функції main)
    var += expression;
}

int main(void) {
    int var = 0;
    for(int i = 0; i < 10; i++) {
        if(i % 2)
            increment(var);
        else
            increment(var, i);
    }
    cout << var << endl;
    return 0;
}
