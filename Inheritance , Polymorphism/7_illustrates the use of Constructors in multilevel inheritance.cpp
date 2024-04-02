/*Write a C++ Program to illustrates the use of Constructors in multilevel
inheritance*/

#include <iostream>
#include <string>

// Base class Person
class Person {
protected:
    std::string name;

public:
    // Default constructor
    Person() : name("Unknown") {
        std::cout << "Person default constructor called." << std::endl;
    }

    // Parameterized constructor
    Person(const std::string& personName) : name(personName) {
        std::cout << "Person parameterized constructor called." << std::endl;
    }

    // Member function to display name
    void displayName() const {
        std::cout << "Name: " << name << std::endl;
    }
};

// Derived class Student from Person
class Student : public Person {
protected:
    int rollNumber;

public:
    // Default constructor
    Student() : rollNumber(0) {
        std::cout << "Student default constructor called." << std::endl;
    }

    // Parameterized constructor
    Student(const std::string& studentName, int studentRoll) : Person(studentName), rollNumber(studentRoll) {
        std::cout << "Student parameterized constructor called." << std::endl;
    }

    // Member function to display roll number
    void displayRollNumber() const {
        std::cout << "Roll Number: " << rollNumber << std::endl;
    }
};

// Derived class ExamResult from Student
class ExamResult : public Student {
private:
    double marks;

public:
    // Default constructor
    ExamResult() : marks(0.0) {
        std::cout << "ExamResult default constructor called." << std::endl;
    }

    // Parameterized constructor
    ExamResult(const std::string& studentName, int studentRoll, double examMarks) : Student(studentName, studentRoll), marks(examMarks) {
        std::cout << "ExamResult parameterized constructor called." << std::endl;
    }

    // Member function to display marks
    void displayMarks() const {
        std::cout << "Marks: " << marks << std::endl;
    }
};

int main() {
    // Create objects and call constructors
    std::cout << "Creating objects:" << std::endl;
    Person person("Arjav");
    Student student("Hasya", 101);
    ExamResult result("Arjav", 102, 85.5);

    std::cout << std::endl;

    // Display object information
    std::cout << "Displaying object information:" << std::endl;
    person.displayName();

    std::cout << std::endl;

    student.displayName();
    student.displayRollNumber();

    std::cout << std::endl;

    result.displayName();
    result.displayRollNumber();
    result.displayMarks();
}
