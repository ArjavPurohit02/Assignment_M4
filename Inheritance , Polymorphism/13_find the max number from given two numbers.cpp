/*Write a program to find the max number from given two numbers
using friend function*/

#include <iostream>

class Numbers {
private:
    int num1;
    int num2;

public:
    // Constructor
    Numbers(int n1, int n2) : num1(n1), num2(n2) {}

    // Friend function to find the maximum number
    friend int findMax(const Numbers& numbers);
};

int findMax(const Numbers& numbers) {
    return (numbers.num1 > numbers.num2) ? numbers.num1 : numbers.num2;
}

int main() {
    int a, b;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    Numbers nums(a, b);
    int maxNumber = findMax(nums);

    std::cout << "Maximum number is: " << maxNumber << std::endl;

}

