#include <stdio.h>

int main() {
    int i, n, terms, term = 0;
    long long sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("The series is:\n");

    for(i = 1; i <= terms; i++) {
        term = term * 10 + n;
        printf("%d ", term);
        sum += term;
    }

    printf("\nThe sum is: %lld\n", sum);

    return 0;
}
