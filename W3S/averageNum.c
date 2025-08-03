#include <stdio.h>

int main() {
    float phy, chem, math, bio;
    float total, percentage;
    
    printf("Enter the marks of all subjects (Physics, Chemistry, Math, Biology): ");
    scanf("%f %f %f %f", &phy, &chem, &math, &bio);


    total = phy + chem + math + bio;
    percentage = total / 400 * 100;

    
    printf("Total marks: %.2f\n", total);
    printf("Total percentage: %.2f%%\n", percentage);


    if (percentage >= 90) {
        printf("Grade: A+\n");
    }
    else if (percentage >= 80) {
        printf("Grade: A\n");
    }
    else if (percentage >= 70) {
        printf("Grade: A-\n");
    }
    else if (percentage >= 40) {
        printf("Grade: B\n");
    }
    else {
        printf("Grade: Fail\n");
    }

    return 0;
}
