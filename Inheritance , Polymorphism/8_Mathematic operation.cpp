/*Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading*/

#include <iostream>

// Function to perform addition
int mathOperation(int a, int b) {
    return a + b;
}

double mathOperation(double a, double b) {
    return a + b;
}

// Function to perform subtraction
int mathOperation(int a, int b, int c) {
    return a - b - c;
}

double mathOperation(double a, double b, double c) {
    return a - b - c;
}

// Function to perform multiplication
int mathOperation(int a, int b, int c, int d) {
    return a * b * c * d;
}

double mathOperation(double a, double b, double c, double d) {
    return a * b * c * d;
}

// Function to perform division
int mathOperation(int a, int b, int c, int d, int e) {
    return (a / b) / (c / d) / e;
}

double mathOperation(double a, double b, double c, double d, double e) {
    return (a / b) / (c / d) / e;
}

int main() {
    // Integer operations
    std::cout << "Integer Addition: " << mathOperation(10, 5) << std::endl;
    std::cout << "Integer Subtraction: " << mathOperation(15, 5, 3) << std::endl;
    std::cout << "Integer Multiplication: " << mathOperation(2, 3, 4, 5) << std::endl;
    std::cout << "Integer Division: " << mathOperation(100, 2, 10, 2, 5) << std::endl;

    std::cout << std::endl;

    // Double operations
    std::cout << "Double Addition: " << mathOperation(10.5, 3.5) << std::endl;
    std::cout << "Double Subtraction: " << mathOperation(20.5, 5.5, 3.5) << std::endl;
    std::cout << "Double Multiplication: " << mathOperation(2.5, 3.5, 4.5, 5.5) << std::endl;
    std::cout << "Double Division: " << mathOperation(100.0, 2.0, 10.0, 2.0, 5.0) << std::endl;

}
