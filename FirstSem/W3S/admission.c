#include <stdio.h>

int main() {
    int math, phy, chem, total_all_sub, total_math_phy;

    
    printf("Enter the marks of Mathematics, Physics, and Chemistry: ");
    scanf("%d %d %d", &math, &phy, &chem);

    total_all_sub = math + chem + phy;
    total_math_phy = math + phy;

    
    if ((math >= 65 && chem >= 50 && phy >= 55 && total_all_sub >= 190) || total_math_phy >= 140) 
    {
        printf("You are eligible for the admission.\n");
    } 
    else {
        printf("You are not eligible for the admission.\n");
    }

    return 0;
}
