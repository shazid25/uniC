// Input an array ar[], print the positin
// of k from the array.

#include <stdio.h>

int main() {
    int i, n, k;
    scanf("%d", &n);
    int ar[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    printf("\n input k: \n");
    scanf("%d", &k);

    for(i = 0; i < n; i++) {
        if(ar[i] == k) {
            printf("%d", i);
        }
    }

    return 0;
}
