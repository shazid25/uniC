#include <iostream>
using namespace std;

// Class for Faculty
class Faculty {
private:
    float basicSalary;
    float researchAllowance;

public:
    // Constructor to initialize values
    Faculty(float basic, float research) {
        basicSalary = basic;
        researchAllowance = research;
    }

    // Declare friend function
    friend float calculateTotalSalary(Faculty f);
};

// Friend function definition
float calculateTotalSalary(Faculty f) {
    return (f.basicSalary * 1.40) + f.researchAllowance;
}

int main() {
    // Create a faculty member
    Faculty f1(50000, 10000);

    // Calculate total salary using friend function
    cout << "Total Salary of Faculty: " << calculateTotalSalary(f1) << endl;

    return 0;
}
