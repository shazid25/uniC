#include<stdio.h>
int main()
{

    int i,n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int ar[n];


    printf("Enter the value:");
    for(i = 0 ; i < n; i++)

    {

        scanf("%d", &ar[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            printf("Index %d:%d\n", i, ar[i]);
        }
    }
    return 0;
}
