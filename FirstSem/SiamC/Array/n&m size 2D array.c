#include<stdio.h>
int main()
{
    int i,j,m,n;
    printf("input the index size\n");
    scanf("%d %d",&n,&m);
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
}
