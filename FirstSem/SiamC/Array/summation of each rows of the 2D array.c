#include<stdio.h>
int main()
{
    int i,j,m,n,sum=0;
    printf("input the index size\n");
    scanf("%d%d",&n,&m);
    int ar[n][m];

    printf("input the value of array\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    printf("printing the array\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }

    printf("summation of rows 0\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum=sum+ar[i][j];
        }
        printf("Sum of row %d = %d\n", i, sum);

    }

}
