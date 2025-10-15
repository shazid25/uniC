#include<stdio.h>
int main()
{
    int i;
    int ar[5],br[4];

    printf("input the value of 1st array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("input the value of 2nd array\n");
    for(i=0;i<4;i++)
    {
        scanf("%d",&br[i]);
    }

    printf("print 1st array\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",ar[i]);
    }
    printf("print 2nd array\n");
    for(i=0;i<4;i++)
    {
        printf("%d\n",br[i]);
    }

}
