/*Write a C++ program to implement a class called Student that has private
member variables for name, class, roll number, and marks. Include
member functions to calculate the grade based on the marks and display
the student's information. Accept address from each student implement
using of aggregation*/


#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int rollNumber;
    int marks;

public:
    // Constructor to initialize the object
    Student(const std::string& studentName, int studentRoll, int studentMarks) {
        name = studentName;
        rollNumber = studentRoll;
        marks = studentMarks;
    }

    // Member function to calculate the grade based on marks
    char calculateGrade() const {
        if (marks >= 90) {
            return 'A';
        } else if (marks >= 80) {
            return 'B';
        } else if (marks >= 70) {
            return 'C';
        } else if (marks >= 60) {
            return 'D';
        } else {
            return 'F';
        }
    }

    // Member function to display student information
    void displayInfo() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: " << marks << std::endl;
        std::cout << "Grade: " << calculateGrade() << std::endl;
    }
};

class Address {
private:
    std::string street;
    std::string city;
    std::string state;
    std::string country;

public:
    // Constructor to initialize the address
    Address(const std::string& st, const std::string& ct, const std::string& stt, const std::string& cntry) {
        street = st;
        city = ct;
        state = stt;
        country = cntry;
    }

    // Member function to display the address
    void displayAddress() const {
        std::cout << "Address: " << street << ", " << city << ", " << state << ", " << country << std::endl;
    }
};

int main() {
    // Create a Student object and an Address object using the constructor
    Student student1("Arjav Purohit", 101, 85);
    Address address1("123 Main St", "Anytown", "State", "Country");

    // Display student information and address
    student1.displayInfo();
    address1.displayAddress();

}

