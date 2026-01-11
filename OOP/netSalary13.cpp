#include <iostream>
using namespace std;

// Base class
class Employee {
protected:
    double basicSalary;

public:
    void setBasicSalary(double salary) {
        basicSalary = salary;
    }

    double getBasicSalary() {
        return basicSalary;
    }
};

// Allowance class (virtual inheritance)
class Allowance : virtual public Employee {
protected:
    double hra;

public:
    void calculateHRA() {
        hra = basicSalary * 0.30; // 30% of basic salary
    }

    double getHRA() {
        return hra;
    }
};

// Deduction class (virtual inheritance)
class Deduction : virtual public Employee {
protected:
    double medicalAllowance;

public:
    void calculateMedicalAllowance() {
        medicalAllowance = 2000; // fixed medical allowance
    }

    double getMedicalAllowance() {
        return medicalAllowance;
    }
};

// Salary class (derived from Allowance and Deduction)
class Salary : public Allowance, public Deduction {
public:
    double calculateNetSalary() {
        calculateHRA();
        calculateMedicalAllowance();
        return basicSalary + hra + medicalAllowance;
    }
};

int main() {
    Salary s;

    s.setBasicSalary(30000);

    cout << "Basic Salary: " << s.getBasicSalary() << endl;
    cout << "HRA (30%): " << s.getHRA() << endl;
    cout << "Medical Allowance: 2000" << endl;
    cout << "Net Salary: " << s.calculateNetSalary() << endl;

    return 0;
}
