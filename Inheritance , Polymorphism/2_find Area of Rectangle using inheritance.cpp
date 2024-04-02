/*Write a C++ Program to find Area of Rectangle using inheritance*/


#include <iostream>

// Base class Rectangle
class Rectangle {
protected:
    double length;
    double width;

public:
    // Constructor to initialize the object
    Rectangle(double l, double w) : length(l), width(w) {}

    // Member function to calculate area
    double calculateArea() const {
        return length * width;
    }
};

// Derived class Square inheriting from Rectangle
class Square : public Rectangle {
public:
    // Constructor to initialize the object
    Square(double side) : Rectangle(side, side) {}
};

int main() {
    // Create a Square object
    Square square(5.0);

    // Calculate and display the area of the square
    std::cout << "Area of Square: " << square.calculateArea() << std::endl;

}

