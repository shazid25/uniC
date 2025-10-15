#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,n,sum=0;
    printf("input the value of n ");
    scanf("%d",&n);
    j=2;

    for(i=1;i<=n;i+=2)
    {   printf("%d^%d + ",i,j);
        k=pow(i,j);
        j=j+i;
        sum=sum+k;
    }
    printf("\nthe sum of this series ");
    printf("%d",sum);
}
