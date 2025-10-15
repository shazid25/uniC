#include<stdio.h>
int main()
{
    int i,j,n;
    printf("input the index size\n");
    scanf("%d",&n);
    int ar[n], br[n];

    printf("input the value of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("print the array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",i);
    }
    for(i=0,j=n-1 ;i<n; i++,j--)
    {
        br[i]=ar[j];
    }
    for(i=0;i<n;i++)
    {
        ar[i]=br[i];
    }
    printf("print the reverse array\n");
    for(i=0;i<n;i++)
    {
        printf("%d",ar[i]);
    }
}
