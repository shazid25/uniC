#include <stdio.h>

int main() {
    int x, n;
    double sum = 1.0, term = 1.0;
    
    printf("Input the value of x: ");
    scanf("%d", &x);
    
    printf("Input number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        term = term * x / i;
        sum += term;
    }


    printf("The sum is: %f\n", sum);

    return 0;
}
