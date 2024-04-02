/*Write a programto swap the two numbers using friend function
without using third variable*/

#include <iostream>

class Number {
private:
    int num;

public:
    // Constructor
    Number(int n) : num(n) {}

    // Friend function to swap numbers
    friend void swapNumbers(Number& num1, Number& num2);
};

void swapNumbers(Number& num1, Number& num2) {
    num1.num = num1.num + num2.num;
    num2.num = num1.num - num2.num;
    num1.num = num1.num - num2.num;
}

int main() {
    int a, b;

    std::cout << "Enter two numbers to swap: ";
    std::cin >> a >> b;

    Number num1(a);
    Number num2(b);

    swapNumbers(num1, num2);

    std::cout << "After swapping: " << std::endl;
    std::cout << "Number 1: " << num1.num << std::endl;
    std::cout << "Number 2: " << num2.num << std::endl;

}
