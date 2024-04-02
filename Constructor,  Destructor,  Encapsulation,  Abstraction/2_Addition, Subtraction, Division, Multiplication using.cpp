/*Write a program of Addition, Subtraction, Division, Multiplication using
constructor.*/

#include <iostream>
using namespace std;

class Calculator {
private:
    int num1;
    int num2;

public:
    Calculator(int a, int b) {
        num1 = a;
        num2 = b;
    }

    int add() {
        return num1 + num2;
    }

    int subtract() {
        return num1 - num2;
    }

    double divide() {
        if (num2 != 0) {
            return static_cast<double>(num1) / num2;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }

    int multiply() {
        return num1 * num2;
    }
};

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Calculator calc(a, b);

    cout << "Sum: " << calc.add() << endl;
    cout << "Difference: " << calc.subtract() << endl;

    if (b != 0) {
        cout << "Quotient: " << calc.divide() << endl;
    }

    cout << "Product: " << calc.multiply() << endl;

}
