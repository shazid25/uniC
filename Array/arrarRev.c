#include <stdio.h>

int main() {
    int i, n;
    scanf("%d", &n);

    int ar[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    for(i = 0; i < n/2; i++) {
        int temp = ar[i];
        ar[i] = ar[n-1-i];
        ar[n-1-i] = temp;
    }

    printf("\nAfter reversing:\nar[] = ");
    for(i = 0; i < n; i++) {
        printf("%d ", ar[i]);
    }

    return 0;
}