#include <stdio.h>

int main() {
    int n, sum = 0;


    printf("Input the number of terms: ");
    scanf("%d", &n);

    printf("The square natural numbers up to %d terms are: ", n);

    
    for (int i = 1; i <= n; i++) {
        int square = i * i;
        printf("%d ", square);
        sum += square;
    }


    printf("\nThe Sum of Square Natural Number up to %d terms = %d\n", n, sum);

    return 0;
}
