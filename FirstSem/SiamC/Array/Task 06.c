#include <stdio.h>

int main()
{
    int i, n;
    printf("Input the size of array:\n");
    scanf("%d", &n);

    int ar[n];

    printf("Input the values of array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    printf("Values at odd indexes:\n");
    for (i = 0; i < n; i++)
    {
        if (i % 2 == 1)
        {
            printf("Index %d: %d\n", i, ar[i]);
        }
    }

    return 0;
}
