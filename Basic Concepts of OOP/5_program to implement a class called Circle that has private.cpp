/*. Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference.*/

#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double getRadius() {
        return radius;
    }
};

int main() {
    Circle circle(5.0);
    cout << "Radius of the circle: " << circle.getRadius() << endl;

}
