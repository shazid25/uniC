// Sumation of all the odd index's element
// from the array.

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int ar[n];

    // Input elements of array
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    // Calculate sum of elements at odd indices
    for(i = 0; i < n; i++) {
        if(i % 2 == 1) {  // Odd index
            sum += ar[i];
        }
    }

    // Output the result
    printf("Sum of elements at odd index's = %d\n", sum);

    return 0;
}
