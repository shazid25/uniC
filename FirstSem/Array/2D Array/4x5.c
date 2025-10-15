#include<stdio.h>
int main()
{
    int i,j,m,n;
    int ar[4][5];
    printf("input the value of array\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    printf("printing the array\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
}
