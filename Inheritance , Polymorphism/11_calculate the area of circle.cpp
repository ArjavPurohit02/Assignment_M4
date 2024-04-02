/*Write a program to calculate the area of circle, rectangle and triangle
using Function Overloading
Rectangle: Area * breadth
Triangle: ½ *Area* breadth
Circle: Pi * Area *Area*/


#include <iostream>
#include <cmath>

const double PI = 3.14159;

// Function to calculate the area of a rectangle
double calculateArea(double length, double breadth) {
    return length * breadth;
}

// Function to calculate the area of a triangle
double calculateArea(double base, double height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a circle
double calculateArea(double radius) {
    return PI * pow(radius, 2);
}

int main() {
    double length = 5.0, breadth = 3.0;
    double base = 4.0, height = 6.0;
    double radius = 2.5;

    // Calculate and display area of rectangle
    double rectangleArea = calculateArea(length, breadth);
    std::cout << "Area of Rectangle: " << rectangleArea << std::endl;

    // Calculate and display area of triangle
    double triangleArea = calculateArea(base, height);
    std::cout << "Area of Triangle: " << triangleArea << std::endl;

    // Calculate and display area of circle
    double circleArea = calculateArea(radius);
    std::cout << "Area of Circle: " << circleArea << std::endl;

}

