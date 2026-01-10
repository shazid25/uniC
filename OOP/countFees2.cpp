#include <iostream>
using namespace std;

class FeeCalculator {
public:

    // 1️⃣ Regular Student
    float CalculateFee(float tuition_fee, float exam_fee) {
        return tuition_fee + exam_fee;
    }

    // 2️⃣ Student with Scholarship
    float CalculateFee(float tuition_fee, float scholarship_amount, float exam_fee) {
        return (tuition_fee - scholarship_amount) + exam_fee;
    }

    // 3️⃣ Student with Additional Courses
    float CalculateFee(float tuition_fee, float additional_course_fee,
                       int no_of_courses, float exam_fee) {
        return tuition_fee + (additional_course_fee * no_of_courses) + exam_fee;
    }
};

int main() {
    FeeCalculator fee;

    // Regular student
    cout << "Regular Student Fee: "
         << fee.CalculateFee(30000, 2000) << endl;

    // Student with scholarship
    cout << "Scholarship Student Fee: "
         << fee.CalculateFee(30000, 5000, 2000) << endl;

    // Student with additional courses
    cout << "Additional Course Student Fee: "
         << fee.CalculateFee(30000, 1500, 2, 2000) << endl;

    return 0;
}
