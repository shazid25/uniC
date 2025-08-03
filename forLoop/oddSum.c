#include <stdio.h>

int main() {
    int i, n, m, sum = 0;

    printf("Enter the first number: ");
    scanf("%d", &n);

    printf("Enter the second number: ");
    scanf("%d", &m);

    printf("Odd numbers between %d and %d are:\n", n, m);

    for (i = n; i <= m; i++) {
        if (i % 2 != 0) {  
            printf("%d ", i);  
            sum += i;  
        }
    }

    printf("\nThe sum is: %d\n", sum);

    return 0;
}
