#include<stdio.h>
int main()
{
    int i,j,m,n;
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
    printf("printing the left diagons of this array\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           if(i==j)
           {
               printf("%d",ar[i][j]);
           }
        }
        printf(" \n ");
    }
    printf("printing the right diagons of this array\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           if(i+j==m-1)     //this m-1 condition is for only rectangular shape/table
           {
               printf("%d",ar[i][j]);
           }
        }
        printf("\n ");
    }


}
