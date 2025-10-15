#include<stdio.h>
int main()
{
    int i,n;
    printf("input the index size\n");
    scanf("%d",&n);
    int ar[n];
    printf("input the value of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("print the array\n");
    for(i=0;i<n;i++)
    {
        printf("%d",ar[i]);
    }
    printf("\nThe Even elements are:\n");
    for (i = 0; i < n; i++)
    {
        if (ar[i] % 2 == 0)
        {
            printf("%d ", ar[i]);
        }
    }

    printf("\nThe Odd elements are:\n");
    for (i = 0; i < n; i++)
    {
        if (ar[i] % 2 != 0)
        {
            printf("%d ", ar[i]);
        }
    }
}
