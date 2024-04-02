/*Write a C++ Program to show access to Private Public and Protected using
Inheritance*/

#include <iostream>
#include <string>

// Base class Person
class Person {
private:
    std::string privateData;
protected:
    std::string protectedData;
public:
    std::string publicData;

    // Constructor to initialize the object
    Person(const std::string& privateInfo, const std::string& protectedInfo, const std::string& publicInfo)
        : privateData(privateInfo), protectedData(protectedInfo), publicData(publicInfo) {}

    // Member function to display data
    void displayData() const {
        std::cout << "Private Data: " << privateData << std::endl;  // Accessible only within the class
        std::cout << "Protected Data: " << protectedData << std::endl;  // Accessible within the class and derived classes
        std::cout << "Public Data: " << publicData << std::endl;  // Accessible everywhere
    }
};

// Derived class Employee from Person
class Employee : public Person {
public:
    // Constructor to initialize the object
    Employee(const std::string& privateInfo, const std::string& protectedInfo, const std::string& publicInfo)
        : Person(privateInfo, protectedInfo, publicInfo) {}
};

int main() {
    // Create an Employee object
    Employee employee("PrivateInfo", "ProtectedInfo", "PublicInfo");

    // Access public member
    std::cout << "Accessing Public Data: " << employee.publicData << std::endl;

    // Access protected member through inheritance
    // std::cout << "Accessing Protected Data: " << employee.protectedData << std::endl;  // This will cause an error because protectedData is protected

    // Access private member indirectly through a member function of the base class
    employee.displayData();
}
