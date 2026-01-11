#include <iostream>
using namespace std;

// Base Class 1
class Product {
protected:
    float unitPrice;
    int quantity;

public:
    void inputProduct() {
        cout << "Enter Unit Price: ";
        cin >> unitPrice;
        cout << "Enter Quantity: ";
        cin >> quantity;
    }
};

// Base Class 2
class Discount {
protected:
    float discountPercent;

public:
    void inputDiscount() {
        cout << "Enter Discount Percentage: ";
        cin >> discountPercent;
    }
};

// Derived Class using Multiple Inheritance
class Bill : public Product, public Discount {
public:
    void calculateBill() {
        float total;
        total = (unitPrice * quantity) -
                ((unitPrice * quantity) * discountPercent / 100);

        cout << "\nTotal Payable Amount: " << total << endl;
    }
};

// Main Function
int main() {
    Bill b;

    b.inputProduct();
    b.inputDiscount();
    b.calculateBill();

    return 0;
}
