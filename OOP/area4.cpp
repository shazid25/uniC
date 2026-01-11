#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function to allow overriding
    virtual double area() {
        return 0; // Base shape has no specific area
    }

    // Virtual destructor for proper cleanup
    virtual ~Shape() {}
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) {
        width = w;
        height = h;
    }

    // Override area method
    double area() override {
        return width * height;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    // Override area method
    double area() override {
        return 3.14159 * radius * radius; // π * r^2
    }
};

int main() {
    // Create objects
    Rectangle rect(5, 10); // width = 5, height = 10
    Circle circ(7);         // radius = 7

    // Print areas
    cout << "Area of Rectangle: " << rect.area() << endl;
    cout << "Area of Circle: " << circ.area() << endl;

    return 0;
}
