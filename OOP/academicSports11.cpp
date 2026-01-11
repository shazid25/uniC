#include <iostream>
using namespace std;

// Academic class
class Academic {
protected:
    int examMarks;

public:
    void getAcademicMarks(int marks) {
        examMarks = marks;
    }
};

// Sports class
class Sports {
protected:
    int sportsMarks;

public:
    void getSportsMarks(int marks) {
        sportsMarks = marks;
    }
};

// Student class (Multiple Inheritance)
class Student : public Academic, public Sports {
public:
    int calculateFinalMarks() {
        return examMarks + sportsMarks;
    }
};

int main() {
    Student s;

    int exam, sports;

    cout << "Enter exam marks: ";
    cin >> exam;

    cout << "Enter sports marks: ";
    cin >> sports;

    s.getAcademicMarks(exam);
    s.getSportsMarks(sports);

    cout << "Final Marks: " << s.calculateFinalMarks() << endl;

    return 0;
}
