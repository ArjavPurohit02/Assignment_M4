/*Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor*/

#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int employeeID;
    double salary;

public:
    // Constructor to initialize the object
    Employee(const std::string& empName, int empID, double empSalary) {
        name = empName;
        employeeID = empID;
        salary = empSalary;
    }

    // Member function to display employee details
    void displayDetails() {
        std::cout << "Employee Name: " << name << std::endl;
        std::cout << "Employee ID: " << employeeID << std::endl;
        std::cout << "Salary: $" << salary << std::endl;
    }
};

int main() {
    // Create an Employee object using the constructor
    Employee emp1("Arjav Purohit", 1001, 50000.0);

    // Display employee details
    emp1.displayDetails();

}
