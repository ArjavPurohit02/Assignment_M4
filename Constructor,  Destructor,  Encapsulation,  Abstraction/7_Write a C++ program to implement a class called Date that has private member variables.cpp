/*Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid.*/

#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Constructor to initialize the object
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Member functions to set the date
    void setDay(int d) {
        day = d;
    }

    void setMonth(int m) {
        month = m;
    }

    void setYear(int y) {
        year = y;
    }

    // Member functions to get the day, month, and year
    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    // Member function to validate if the date is valid
    bool isValidDate() const {
        if (year < 0 || month < 1 || month > 12 || day < 1)
            return false;

        static const int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int maxDays = daysInMonth[month];

        if (month == 2 && isLeapYear(year)) {
            maxDays = 29;
        }

        return day <= maxDays;
    }

private:
    // Helper function to check if a year is a leap year
    bool isLeapYear(int y) const {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }
};

int main() {
    // Create a Date object using the constructor
    Date date1(29, 2, 2024);

    // Set a new date using the member functions
    date1.setDay(31);
    date1.setMonth(12);
    date1.setYear(2022);

    // Get and display the date components
    std::cout << "Day: " << date1.getDay() << std::endl;
    std::cout << "Month: " << date1.getMonth() << std::endl;
    std::cout << "Year: " << date1.getYear() << std::endl;

    // Validate and display if the date is valid
    std::cout << "Is Valid Date? " << (date1.isValidDate() ? "Yes" : "No") << std::endl;

}
