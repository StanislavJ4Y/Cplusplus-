#include <string>
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	string password; // створюємо змінну password типу string
	getline(cin, password); // зберігає введений користувачем пароль
	bool has8char = false;  // відстежуємо чи відповідає введений пароль певним критеріям.
    bool hasUpperCase = false;
    bool hasLowerCase = false;
    bool hasDigit = false;
    bool hasSpecialCharacter = false;
	if (password.length() < 8) // Якщо пароль має менше ніж 8 символів, значення has8char встановлюється на true, що вказує на те, що цей критерій не був виконаний.
        has8char = true;
    for (char ch : password) { //перебирає кожен елемент
        if (isupper(ch)) //ch є змінною, яка представляє кожен символ у рядку
            hasUpperCase = true; //перевіряється, чи є поточний символ ch великою літерою
        else if (islower(ch))
            hasLowerCase = true;
        else if (isdigit(ch))
            hasDigit = true;
        else if (!isalnum(ch))
            hasSpecialCharacter = true;
    }
    if (has8char){
        cout << "The password must be 8 characters long" << endl;
    }
    if (!hasUpperCase){
        cout << "The password must have at least one upper case letter" << endl;
    }
    if (!hasLowerCase){
        cout << "The password must have at least one lower case letter" << endl;
    }
    if (!hasDigit){
        cout << "The password must have at least one digit" << endl;
    }
    if (!hasSpecialCharacter){
        cout << "The password must have at least one special character" << endl;
    }
    else{
        cout << "The password is valid" << endl;
    }
	return 0;
}