// #include <iostream>
// using namespace std;

// class Regular {
// public:
//     virtual double bill(double gb) {
//         return gb * 120;
//     }
// };

// class PremiumUser : public Regular {
// public:
//     double bill(double gb) {
//         return (gb * 100) + 200;
//     }
// };

// int main() {
//     Regular rUser;
//     cout << "Regular User Bill (5 GB): " << rUser.bill(5) << " BDT" << endl;

//     PremiumUser pUser;
//     cout << "Premium User Bill (7 GB): " << pUser.bill(7) << " BDT" << endl;

//     return 0;
// }







#include <iostream>
using namespace std;

class Regular {
public:
    virtual double bill(double gb) {
        return gb * 120;  // Regular rate: 120 BDT per GB
    }
};

class PremiumUser : public Regular {
public:
    double bill(double gb) override {
        return (gb * 100) + 200;  // Premium rate: 100 BDT per GB + 200 BDT fixed
    }
};

int main() {
    double gb;

    // Regular user input
    cout << "Enter GB used by Regular User: ";
    cin >> gb;
    Regular rUser;
    cout << "Regular User Bill: " << rUser.bill(gb) << " BDT" << endl;

    // Premium user input
    cout << "Enter GB used by Premium User: ";
    cin >> gb;
    PremiumUser pUser;
    cout << "Premium User Bill: " << pUser.bill(gb) << " BDT" << endl;

    return 0;
}
