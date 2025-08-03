#include <stdio.h>
#include <math.h>

int main() {
    int x, n, power = 1, sign = 1;
    int term;
    int sum = 0;

    printf("Input the value of x: ");
    scanf("%d", &x);

    printf("Input number of terms: ");
    scanf("%d", &n);

    printf("The values of the series:\n");

    for (int i = 1; i <= n; i++) {
        term = sign * pow(x, power);
        printf("%d\n", term);
        sum += term;

        power += 2;
        sign *= -1;  
    }

    printf("The sum = %d\n", sum);

    return 0;
}
