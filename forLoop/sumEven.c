#include <stdio.h>

int main() {
    int i, n, m, sum = 0;

    printf("Enter the first number: ");
    scanf("%d", &n);

    printf("Enter the second number: ");
    scanf("%d", &m);

    printf("The even numbers are:\n");
    for(i = n; i <= m; i++) {
        if(i % 2 == 0) {
            printf("%d\n", i);
            sum += i;
        }
    }

    printf("Sum is: %d\n", sum);

    return 0;
}
