#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("input the value of n ");
    scanf("%d",&n);


    for(i=1;i<=n;i++)
    {
        printf("%d + ",i);
        sum=sum+i;
    }
    printf("\nthe sum of this series ");
    printf("%d",sum);

}
