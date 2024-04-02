/*Write a Program of Two 1D Matrix Addition using Operator Overloading*/


#include <iostream>

class Matrix {
private:
    int size;
    int* elements;

public:
    // Constructor to initialize the matrix with size and elements
    Matrix(int s, const int* vals) : size(s) {
        elements = new int[size];
        for (int i = 0; i < size; ++i) {
            elements[i] = vals[i];
        }
    }

    // Destructor to free memory
    ~Matrix() {
        delete[] elements;
    }

    // Overloading + operator for matrix addition
    Matrix operator+(const Matrix& other) {
        if (size != other.size) {
            std::cerr << "Error: Matrix sizes are not equal." << std::endl;
            return *this;
        }

        Matrix result(size, elements);
        for (int i = 0; i < size; ++i) {
            result.elements[i] += other.elements[i];
        }

        return result;
    }

    // Function to display the matrix
    void display() const {
        std::cout << "[";
        for (int i = 0; i < size; ++i) {
            std::cout << elements[i];
            if (i != size - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "]" << std::endl;
    }
};

int main() {
    int vals1[] = {1, 2, 3, 4};
    int vals2[] = {5, 6, 7, 8};

    Matrix matrix1(4, vals1);
    Matrix matrix2(4, vals2);

    Matrix result = matrix1 + matrix2;

    std::cout << "Matrix 1: ";
    matrix1.display();

    std::cout << "Matrix 2: ";
    matrix2.display();

    std::cout << "Result of Addition: ";
    result.display();

}
