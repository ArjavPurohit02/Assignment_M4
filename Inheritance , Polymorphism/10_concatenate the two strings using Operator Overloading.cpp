/*Write a program to concatenate the two strings using Operator Overloading*/


#include <iostream>
#include <string>

class MyString {
private:
    std::string str;

public:
    // Default constructor
    MyString() {}

    // Parameterized constructor
    MyString(const std::string& s) : str(s) {}

    // Overloading + operator for string concatenation
    MyString operator+(const MyString& other) {
        MyString result;
        result.str = str + other.str;
        return result;
    }

    // Function to display the string
    void display() const {
        std::cout << str << std::endl;
    }
};

int main() {
    MyString str1("Arjav, ");
    MyString str2("Purohit!");

    MyString result = str1 + str2;

    std::cout << "String 1: ";
    str1.display();

    std::cout << "String 2: ";
    str2.display();

    std::cout << "Concatenated String: ";
    result.display();

}
