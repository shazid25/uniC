#include <iostream>
using namespace std;

int main() {
    int units;
    double bill = 0;

    try {
        cout << "Enter total units consumed: ";
        cin >> units;

        // Validation
        if (units < 0)
            throw "Units cannot be negative!";
        if (units > 1000)
            throw "Units cannot exceed 1000!";

        // Bill calculation
        if (units <= 100) {
            bill = units * 5;
        }
        else if (units <= 200) {
            bill = (100 * 5) + (units - 100) * 7;
        }
        else {
            bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
        }

        cout << "Total Electricity Bill: " << bill << " Tk" << endl;
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    return 0;
}
