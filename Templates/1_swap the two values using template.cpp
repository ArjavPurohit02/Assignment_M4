/*Write a program of to swap the two values using template*/


#include <iostream>

// Template function to swap two values of any type
template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int int1 = 5, int2 = 10;
    double double1 = 3.14, double2 = 6.28;
    char char1 = 'A', char2 = 'B';

    std::cout << "Before swapping:" << std::endl;
    std::cout << "Integers: " << int1 << " " << int2 << std::endl;
    std::cout << "Doubles: " << double1 << " " << double2 << std::endl;
    std::cout << "Characters: " << char1 << " " << char2 << std::endl;

    swapValues(int1, int2);
    swapValues(double1, double2);
    swapValues(char1, char2);

    std::cout << "After swapping:" << std::endl;
    std::cout << "Integers: " << int1 << " " << int2 << std::endl;
    std::cout << "Doubles: " << double1 << " " << double2 << std::endl;
    std::cout << "Characters: " << char1 << " " << char2 << std::endl;


}

