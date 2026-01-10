#include <iostream>
using namespace std;

class FeeCalculator {
public:

    float CalculateFee(float tuition_fee, float exam_fee) {
        return tuition_fee + exam_fee;
    }

    float CalculateFee(float tuition_fee, float scholarship_amount, float exam_fee) {
        return (tuition_fee - scholarship_amount) + exam_fee;
    }

    float CalculateFee(float tuition_fee, float additional_course_fee,
                       int no_of_courses, float exam_fee) {
        return tuition_fee + (additional_course_fee * no_of_courses) + exam_fee;
    }
};

int main() {
    FeeCalculator fee;

    cout << "Regular Student Fee: "
         << fee.CalculateFee(30000, 2000) << endl;

    cout << "Scholarship Student Fee: "
         << fee.CalculateFee(30000, 5000, 2000) << endl;

    cout << "Additional Course Student Fee: "
         << fee.CalculateFee(30000, 1500, 2, 2000) << endl;

    return 0;
}
