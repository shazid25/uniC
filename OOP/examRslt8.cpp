#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int id;
    int midmarks;
    int finalmarks;

    friend class Result;

public:
    Student(string n, int i, int mid, int fin) : name(n), id(i), midmarks(mid), finalmarks(fin) {}
};

class Result
{
private:
    int totalmarks(Student s)
    {
        return s.midmarks + s.finalmarks;
    }

    char grade(Student s)
    {
        int total = totalmarks(s);
        if (total >= 90)
            return 'A';
        else if (total >= 75)
            return 'B';
        else if (total >= 60)
            return 'C';
        else
            return 'F';
    }

public:
    void display(Student s)
    {
        int total = totalmarks(s);
        char g = grade(s);

        cout << "Student Name: " << s.name << endl;
        cout << "Student ID: " << s.id << endl;
        cout << "Mid Marks: " << s.midmarks << endl;
        cout << "Final Marks: " << s.finalmarks << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Grade: " << g << endl;
    }
};

int main()
{
    string name;
    int id, mid, fin;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter student ID: ";
    cin >> id;

    cout << "Enter mid marks: ";
    cin >> mid;

    cout << "Enter final marks: ";
    cin >> fin;

    Student s1(name, id, mid, fin);
    Result r1;

    r1.display(s1);

    return 0;
}