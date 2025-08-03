#include <stdio.h>

int main() {
    int sum = 0, num;

    
    printf("Numbers between 100 and 200, divisible by 9:\n");

    for ( num = 100; num <= 200; num++) {
        if (num % 9 == 0) { 
            printf("%d ", num);
            sum += num;
        }
    }

    
    printf("The sum: %d\n", sum);

    return 0;
}
