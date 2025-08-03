#include <stdio.h>

int main() {
    int num, digit;

    printf("Input a number: ");
    scanf("%d", &num);

    printf("The number in reverse order is: ");

    for (; num != 0; num = num / 10) {
        digit = num % 10; 
        printf("%d", digit); 
    }

    printf("\n");
    return 0;
}
