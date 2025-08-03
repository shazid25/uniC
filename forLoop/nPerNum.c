#include <stdio.h>

int main() {
    int start, end,i ;

    
    printf("Input the starting range or number: ");
    scanf("%d", &start);

    printf("Input the ending range of number: ");
    scanf("%d", &end);

    printf("The Perfect numbers within the given range: ");


    for (int num = start; num <= end; num++) {
        int sum = 0;

    
        for (i = 1; i < num; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }

        
        if (sum == num) {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}
