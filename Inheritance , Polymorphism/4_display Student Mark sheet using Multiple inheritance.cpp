/*Write a C++ Program display Student Mark sheet using Multiple inheritance*/


#include <iostream>
#include <string>

// Base class Student
class Student {
protected:
    std::string name;
    int rollNumber;

public:
    // Constructor to initialize the object
    Student(const std::string& studentName, int studentRoll) : name(studentName), rollNumber(studentRoll) {}

    // Member function to display student information
    void displayStudentInfo() const {
        std::cout << "Name : " << name << std::endl;
        std::cout << "Roll Number : " << rollNumber << std::endl;
    }
};

// Derived class SubjectMarks
class SubjectMarks {
protected:
    int mathMarks;
    int scienceMarks;
    int englishMarks;

public:
    // Constructor to initialize the object
    SubjectMarks(int math, int science, int english) : mathMarks(math), scienceMarks(science), englishMarks(english) {}

    // Member function to display subject-wise marks
    void displaySubjectMarks() const {
        std::cout << "Math Marks: " << mathMarks << std::endl;
        std::cout << "Science Marks: " << scienceMarks << std::endl;
        std::cout << "English Marks: " << englishMarks << std::endl;
    }
};

// Derived class MarkSheet using multiple inheritance
class MarkSheet : public Student, public SubjectMarks {
public:
    // Constructor to initialize the object
    MarkSheet(const std::string& studentName, int studentRoll, int math, int science, int english)
        : Student(studentName, studentRoll), SubjectMarks(math, science, english) {}

    // Member function to display complete mark sheet
    void displayMarkSheet() const {
        std::cout << "Student Mark Sheet\n";
        displayStudentInfo();
        displaySubjectMarks();
    }
};

int main() {
    // Create a MarkSheet object and display the mark sheet
    MarkSheet studentMarkSheet("Arjav Purohit", 101, 85, 90, 75);
    studentMarkSheet.displayMarkSheet();
}
