// Sumaton of an array element

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int ar[n];

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
        sum += ar[i];  
    }

   
    printf("Sum of the array elements = %d\n", sum);

    return 0;
}
