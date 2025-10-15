#include <stdio.h>

int main()
{
    int i, j, m, n, sum;
    printf("Input the size of the array (rows columns):\n");
    scanf("%d%d", &n, &m);
    int ar[n][m];

    printf("Input the values of the array:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &ar[i][j]);
        }
    }

    printf("Printing the array:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }

    
    for (i = 0; i < n; i++) {
        sum = 0;  
        for (j = 0; j < m; j++) {
            sum += ar[i][j];
        }
        printf("Sum of row %d = %d\n", i, sum);
    }

    return 0;
}
