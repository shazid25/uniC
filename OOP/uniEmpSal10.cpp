#include <iostream>
using namespace std;

// Template function to calculate total salary
template <class T>
T calculateTotalSalary(T basicSalary, T bonus) {
    return basicSalary + bonus;
}

int main() {
    // Employee A (int)
    int basicA = 25000;
    int bonusA = 5000;
    cout << "Total Salary of Employee A: "
         << calculateTotalSalary(basicA, bonusA) << endl;

    // Employee B (double)
    double basicB = 35500.75;
    double bonusB = 4200.5;
    cout << "Total Salary of Employee B: "
         << calculateTotalSalary(basicB, bonusB) << endl;

    return 0;
}
