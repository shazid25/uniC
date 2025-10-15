#include<stdio.h>
int main()
{
    int i,j,n;
    printf("input the value of n ");
    scanf("%d",&n);
    j=2;

    for(i=1;i<=n;i+=2)
    {
        printf("%d^%d + ",i,j);
        j+=2;
    }
    printf(".....+n");
}
