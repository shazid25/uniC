

#include <stdio.h>

int main() {
    int i, c, r;

    printf("Enter the number of rows: ");
    scanf("%d", &r);

    for (i = 1; i <= r; i++) {
        for (c = 1; c <= i; c++) {      
            printf("*");              
        }
        printf("\n");                  
    }

    return 0;
} 
