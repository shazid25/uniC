#include<stdio.h>
int main()
{
    int i,n,j;
    printf("input the index size of 1st array\n");
    scanf("%d",&n);
    int ar[n];
    printf("input the index size of 2nd array\n");
    scanf("%d",&n);
    int br[n],cr[n];
    printf("input the value of 1st array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("input the value of 2nd array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&br[i]);
    }
    printf("print the 1st array\n");
    for(i=0;i<n;i++)
    {
        printf("%d",ar[i]);
    }
    printf("\nprint the 2nd array\n");
    for(i=0;i<n;i++)
    {
        printf("%d",br[i]);
    }
    printf("\nprint merge array\n");

}
