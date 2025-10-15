#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,n,x,y,rem,count=0,sum=0;
    scanf("%d",&n);
    x=n;
    y=n;


    while(x!=0)
    {
        x=x/10;
        count++;
    }


     while(y!=0)
    {
        rem=y%10;
        y=y/10;
        sum=sum+pow(rem,count);
    }
    if(sum==n)
    {
        printf("%d is armstrong number", n);
    }
    else
    {
        printf("%d is non armstrong number", n);
    }
}
