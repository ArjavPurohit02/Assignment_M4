/*Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)*/

#include <iostream>
#include <string>

class Cricketer {
protected:
    std::string name;
    int age;

public:
    // Constructor to initialize the object
    Cricketer(const std::string& cricketerName, int cricketerAge) {
        name = cricketerName;
        age = cricketerAge;
    }

    // Member function to display data
    void displayData() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
    // Constructor to initialize the object
    Batsman(const std::string& batsmanName, int batsmanAge, int runs, int best)
        : Cricketer(batsmanName, batsmanAge), totalRuns(runs), bestPerformance(best) {
        calculateAverageRuns();
    }

    // Member function to calculate average runs
    void calculateAverageRuns() {
        averageRuns = static_cast<double>(totalRuns) / 10.0; // Assuming 10 matches played
    }

    // Member function to display data
    void displayData() const {
        Cricketer::displayData();
        std::cout << "Total Runs: " << totalRuns << std::endl;
        std::cout << "Average Runs: " << averageRuns << std::endl;
        std::cout << "Best Performance: " << bestPerformance << std::endl;
    }
};

int main() {
    // Create a Batsman object using the constructor
    Batsman player1("Arjav Purohit", 19, 500, 150);

    // Display player information
    player1.displayData();

}
