#include<stdio.h>
#include<math.h>
int main()
{
    int i,j=2,k=1,l,n;
    printf("input the value of n ");
    scanf("%d",&n);

    for(i=1;i<=n;i+=2)
    {
        l=pow(k,k);
        printf("%d^%d/%d + ",i,j,l);
        k++;
    }
}
