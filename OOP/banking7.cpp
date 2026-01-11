#include <iostream>
using namespace std;

class Balance {
private:
    int taka;
    int poisha;

public:
    // Constructor
    Balance(int t = 0, int p = 0) {
        taka = t;
        poisha = p;
    }

    // Overload + operator
    Balance operator+(const Balance& b) {
        Balance temp;
        temp.taka = taka + b.taka;       // add taka
        temp.poisha = poisha + b.poisha; // add poisha

        // Convert extra poisha into taka
        if (temp.poisha >= 100) {
            temp.taka += temp.poisha / 100;
            temp.poisha = temp.poisha % 100;
        }

        return temp;
    }

    // Display balance
    void display() {
        cout << "Balance: " << taka << " Taka " << poisha << " Poisha" << endl;
    }
};

int main() {
    // Create two balance objects
    Balance A(125, 75);
    Balance B(89, 50);

    // Add balances using overloaded + operator
    Balance C = A + B;

    // Display the final balance
    C.display();

    return 0;
}
