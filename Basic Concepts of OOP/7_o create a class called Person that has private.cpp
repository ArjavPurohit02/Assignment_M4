/*Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables.*/

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void setCountry(string c) {
        country = c;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    string getCountry() {
        return country;
    }
};

int main() {
    Person person1;

    person1.setName("Arjav Purohit");
    person1.setAge(18);
    person1.setCountry("India");

    cout << "Name: " << person1.getName() << endl;
    cout << "Age: " << person1.getAge() << endl;
    cout << "Country: " << person1.getCountry() << endl;

}
