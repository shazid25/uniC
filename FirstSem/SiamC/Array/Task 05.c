#include<stdio.h>
int main()
{
    int i,n;
    printf("input the value of index\n");
    scanf("%d",&n);
    int ar[n];

    printf("input the value of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    printf("printing the array\n");
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==1)
        {
             printf("%d",ar[i]);
        }

    }
}

