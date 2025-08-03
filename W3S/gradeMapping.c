#include <stdio.h>

int main() {
    char grade;

    
    printf("Input the grade: ");
    scanf(" %c", &grade); 
    printf("You have chosen: ");

    
    if (grade == 'E' || grade == 'e') {
        printf("Excellent\n");
    }
    else if (grade == 'V' || grade == 'v') {
        printf("Very Good\n");
    }
    else if (grade == 'G' || grade == 'g') {
        printf("Good\n");
    }
    else if (grade == 'A' || grade == 'a') {
        printf("Average\n");
    }
    else if (grade == 'F' || grade == 'f') {
        printf("Fail\n");
    }
    else {
        printf("Invalid grade\n");
    }

    return 0;
}
