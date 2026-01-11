#include <iostream>
using namespace std;

// Template function
template <class T>
T calculateBill(T units, T rate) {
    return units * rate;
}

int main() {
    // Approximate calculation (int)
    int unitsInt = 120;
    int rateInt = 5;
    cout << "Approximate Bill (int): "
         << calculateBill(unitsInt, rateInt) << endl;

    // Exact calculation (double)
    double unitsDouble = 120.75;
    double rateDouble = 5.25;
    cout << "Exact Bill (double): "
         << calculateBill(unitsDouble, rateDouble) << endl;

    return 0;
}
