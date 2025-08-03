// Generate two array ar[] and br[].
// Swap the array element.


#include <stdio.h>

int main() {
    int i, n;

    // Input size of arrays
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int ar[n], br[n];

    // Input elements of ar[]
    printf("Enter elements of array ar[]:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    // Input elements of br[]
    printf("Enter elements of array br[]:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &br[i]);
    }

    // Swapping elements
    for(i = 0; i < n; i++) {
        int temp = ar[i];
        ar[i] = br[i];
        br[i] = temp;
    }

    // Output after swapping
    printf("\nAfter swapping:\n");

    printf("ar[] = ");
    for(i = 0; i < n; i++) {
        printf("%d ", ar[i]);
    }

    printf("\nbr[] = ");
    for(i = 0; i < n; i++) {
        printf("%d ", br[i]);
    }

    return 0;
}
