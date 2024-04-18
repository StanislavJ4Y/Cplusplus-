#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    string name;
    int age;
    string occupation; 
    string location;
    
    Person(string name, int age, string occupation, string location) { // Конструктор для ініціалізації змінних-членів
    this->name = name;
    this->age = age;
    this->occupation = occupation;
    this->location = location;
}

    void print()
    {
        cout << name << " is " << age << " years old and works as a " << occupation << " in "<< location << endl;
    }
};

int main()
{
    
    Person person("Stas", 19, "Web designer", "Kyiv");

    person.print();

    person.name = "Vadim";
    person.age = 19;
    person.occupation = "C++ developer";
    person.location = "Mykolaiv";

    person.print();

    return 0;
}