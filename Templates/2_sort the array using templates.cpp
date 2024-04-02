/*Write a program of to sort the array using templates*/


#include <iostream>

// Template function to swap two elements of any type
template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

// Template function to perform selection sort on an array of any type
template <typename T>
void selectionSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

// Template function to display elements of an array of any type
template <typename T>
void displayArray(const T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int intArray[] = {5, 2, 8, 1, 3};
    double doubleArray[] = {3.5, 2.1, 6.7, 1.2, 5.8};
    char charArray[] = {'b', 'c', 'a', 'e', 'd'};
    const int size = sizeof(intArray) / sizeof(int);

    std::cout << "Original Integer Array: ";
    displayArray(intArray, size);
    selectionSort(intArray, size);
    std::cout << "Sorted Integer Array: ";
    displayArray(intArray, size);

    std::cout << "Original Double Array: ";
    displayArray(doubleArray, size);
    selectionSort(doubleArray, size);
    std::cout << "Sorted Double Array: ";
    displayArray(doubleArray, size);

    std::cout << "Original Char Array: ";
    displayArray(charArray, size);
    selectionSort(charArray, size);
    std::cout << "Sorted Char Array: ";
    displayArray(charArray, size);


}

