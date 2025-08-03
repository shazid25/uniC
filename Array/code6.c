// Input an array ar[], print all the
// odd index's value from the odd

#include <stdio.h>

int main() {
    int i, n;
    scanf("%d", &n);
    int ar[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    printf("\n outputs are: \n");

    for(i = 0; i < n; i++) {
        if(i % 2 == 1) {
            printf("%d ", ar[i]);
        }
    }

    return 0;
}
