#include <iostream>
using namespace std;

// JobRole class
class JobRole {
protected:
    int basicSalary;

public:
    void setBasicSalary(int salary) {
        basicSalary = salary;
    }
};

// Experience class
class Experience {
protected:
    int yearsOfExperience;
    int bonus;

public:
    void setExperience(int years) {
        yearsOfExperience = years;
        bonus = yearsOfExperience * 1500;
    }
};

// Employee class (inherits from JobRole and Experience)
class Employee : public JobRole, public Experience {
public:
    int calculateNetSalary() {
        return basicSalary + bonus;
    }
};

int main() {
    Employee emp;

    // Given values
    emp.setBasicSalary(28000);
    emp.setExperience(6);

    cout << "Net Salary: " << emp.calculateNetSalary() << endl;

    return 0;
}
