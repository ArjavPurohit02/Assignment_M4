/*. Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)*/

#include <iostream>
#include <string>

// Base class Person
class Person {
protected:
    std::string name;
    int age;

public:
    // Constructor to initialize the object
    Person(const std::string& personName, int personAge) : name(personName), age(personAge) {}

    // Member function to display data
    void displayData() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

// Derived class Student from Person
class Student : public Person {
protected:
    double percentage;

public:
    // Constructor to initialize the object
    Student(const std::string& studentName, int studentAge, double studentPercentage)
        : Person(studentName, studentAge), percentage(studentPercentage) {}

    // Member function to display data
    void displayData() const {
        Person::displayData();
        std::cout << "Percentage: " << percentage << std::endl;
    }
};

// Derived class Teacher from Person
class Teacher : public Person {
protected:
    double salary;

public:
    // Constructor to initialize the object
    Teacher(const std::string& teacherName, int teacherAge, double teacherSalary)
        : Person(teacherName, teacherAge), salary(teacherSalary) {}

    // Member function to display data
    void displayData() const {
        Person::displayData();
        std::cout << "Salary: " << salary << std::endl;
    }
};

int main() {
    // Create a Student object and display data
    Student student("Arjav Purohit", 20, 85.5);
    std::cout << "Student Details:\n";
    student.displayData();

    std::cout << std::endl;

    // Create a Teacher object and display data
    Teacher teacher("Arjav Purohit", 30, 50000.0);
    std::cout << "Teacher Details:\n";
    teacher.displayData();
}
