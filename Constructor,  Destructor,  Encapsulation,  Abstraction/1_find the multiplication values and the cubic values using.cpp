/*Write a program to find the multiplication values and the cubic values using
inline function*/

#include <iostream>
using namespace std;

inline int multiply(int a, int b) {
    return a * b;
}

inline int cube(int num) {
    return num * num * num;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    int product = multiply(x, y);
    cout << "Multiplication of " << x << " and " << y << " is: " << product << endl;

    int num;
    cout << "Enter a number to find its cubic value: ";
    cin >> num;

    int cubicValue = cube(num);
    cout << "Cubic value of " << num << " is: " << cubicValue << endl;

}
