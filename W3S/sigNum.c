#include<stdio.h>

int main() {
    int m, n;

    printf("Enter the value of m: "); 
    scanf("%d", &m);

    if (m > 0)
     {
        printf("n is 1\n");
    }
     else if (m == 0) {
        printf("n is 0\n");
    }
     else {
        printf("n is -1\n"); 
    }

    return 0;
}
