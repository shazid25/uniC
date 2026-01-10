#include <iostream>
using namespace std;

class Transport {
public:

    // 1️⃣ Basic Transport Cost
    float CalculateCost(float distance, float rate_per_km) {
        return distance * rate_per_km;
    }

    // 2️⃣ Truck Cost (with loading fee)
    float CalculateCost(float distance, float rate_per_km, int loadingFee) {
        return (distance * rate_per_km) + loadingFee;
    }

    // 3️⃣ MiniTruck Cost (with environmental fee percentage)
    float CalculateCost(float distance, float rate_per_km, float envFeePercent) {
        float basicCost = distance * rate_per_km;
        return basicCost + (basicCost * envFeePercent / 100);
    }
};

int main() {
    Transport t;

    // Basic transport
    cout << "Basic Transport Cost: "
         << t.CalculateCost(100, 50) << endl;

    // Truck
    cout << "Truck Transportation Cost: "
         << t.CalculateCost(100, 50, 500) << endl;

    // MiniTruck
    cout << "MiniTruck Transportation Cost: "
         << t.CalculateCost(100, 50, 2.0f) << endl;

    return 0;
}
