#include<stdio.h>
int main()
{
    int i,n,count;
    printf("input the index size\n");
    scanf("%d",&n);
    int ar[i];
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
    printf("\nprint the duplicate array elements\n");
    for(i=0;i<n;i++)
    {
        if(ar[i]==ar[i])
        {
            count++;
            printf("%d",count);
        }

    }
}

