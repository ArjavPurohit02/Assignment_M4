/*Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)*/


#include <iostream>

// Base class Students
class Students {
protected:
    int rollNumber;

public:
    // Constructor to initialize the object
    Students(int studentRoll) : rollNumber(studentRoll) {}

    // Member function to display student information
    void displayStudentInfo() const {
        std::cout << "Roll Number: " << rollNumber << std::endl;
    }
};

// Derived class Test from Students
class Test : public Students {
protected:
    int subject1Marks;
    int subject2Marks;

public:
    // Constructor to initialize the object
    Test(int studentRoll, int marks1, int marks2) : Students(studentRoll), subject1Marks(marks1), subject2Marks(marks2) {}

    // Member function to display test marks
    void displayTestMarks() const {
        std::cout << "Subject 1 Marks: " << subject1Marks << std::endl;
        std::cout << "Subject 2 Marks: " << subject2Marks << std::endl;
    }
};

// Derived class Result from Test
class Result : public Test {
private:
    int totalMarks;

public:
    // Constructor to initialize the object
    Result(int studentRoll, int marks1, int marks2) : Test(studentRoll, marks1, marks2) {
        totalMarks = subject1Marks + subject2Marks;
    }

    // Member function to display total marks
    void displayTotalMarks() const {
        displayStudentInfo();
        displayTestMarks();
        std::cout << "Total Marks: " << totalMarks << std::endl;
    }
};

int main() {
    // Create a Result object and display the total marks
    Result studentResult(101, 85, 90);
    studentResult.displayTotalMarks();

}
