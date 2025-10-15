#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("input the value of n ");
    scanf("%d",&n);
    j=2;
    k=2;

    for(i=1;i<=n;i+=2)
    {
        printf("%d^%d/%d! + ",i,j,k);
        j+=2;
        k+=2;
    }
}
