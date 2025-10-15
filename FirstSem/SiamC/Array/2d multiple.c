#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,o,p;
    printf("input the index size of array 01\n");
    scanf("%d%d",&n,&m);
    int ar[n][m];
    printf("input the index size of array 02\n");
    scanf("%d%d",&k,&l);
    int br[k][l];

    printf("input the value of array 01\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d%d",&ar[i][j]);
        }
    }
    printf("input the value of array 02\n");
    for(o=0;o<k;o++)
    {
        for(p=0;p<l;p++)
        {
            scanf("%d%d",&br[o][p]);
        }
    }
    printf("printing the array 01\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d",ar[i][j]);
        }
    }
    printf("printing the array 02\n");
    for(o=0;o<k;o++)
    {
        for(p=0;p<l;p++)
        {
            printf("%d",br[o][p]);
        }
    }





}

