#include <stdio.h>

int main() {
    int num1, num2, choice;
    float result;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("\nSelect operation to perform:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    if (choice == 1) {
        result = num1 + num2;
        printf("The Addition of %d and %d is: %.2f\n", num1, num2, result);
    }
    else if (choice == 2) {
        result = num1 - num2;
        printf("The Subtraction of %d and %d is: %.2f\n", num1, num2, result);
    }
    else if (choice == 3) {
        result = num1 * num2;
        printf("The Multiplication of %d and %d is: %.2f\n", num1, num2, result);
    }
    else if (choice == 4) {
        if (num2 == 0) {
            printf("Division by zero is not allowed.\n");
        } else {
            result = (float)num1 / num2;
            printf("The Division of %d by %d is: %.2f\n", num1, num2, result);
        }
    }
    else {
        printf("Invalid choice! Please select a number between 1 and 4.\n");
    }

    return 0;
}
