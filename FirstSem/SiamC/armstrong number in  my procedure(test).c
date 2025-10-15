#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,y,rem,count=0,sum=0;
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
        printf("armstorng");
    }
    else
    {
        printf("non armstrong");
    }
}
