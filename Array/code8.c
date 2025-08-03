// Declare two array ar[], bar[].
// Input ar[] array, pass the ar[]
// array to br[].

#include <stdio.h>

int main() {
    int i, n, k;
    scanf("%d", &n);
    int ar[n];
    int br[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    for(i = 0; i < n; i++) {
        br[i] = ar[i];
    }

    for(i = 0; i < n; i++) {
        printf("%d ", br[i]);
    }

    return 0;
}
