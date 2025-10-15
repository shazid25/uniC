#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,rem,count=0,sum=0;
    scanf("%d",&n);
    x=n;

    while(x!=0)
    {
        rem=x%10;
        x=x/10;

    }
        count++;
        sum=sum+pow(rem,count);
    if(sum==n)
    {
        printf("armstrong");
    }
    else
    {
        printf("non armstrong");
    }
}
