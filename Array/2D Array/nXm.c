#include<stdio.h>

int main()
{
    int i, j, n, m;
    int ar[100][100]; 

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("Enter number of columns: ");
    scanf("%d", &m);

    printf("Input the values of the array:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    printf("Printing the array:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }

    return 0;
}
