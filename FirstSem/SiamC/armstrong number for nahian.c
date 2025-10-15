#include<stdio.h>
#include<math.h>
int main()
{
    int  x,y,n,rem,count=0,sum=0;
    printf("input the number ");
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
        printf("armstrong");
    }
    else
    {
        printf("non armstrong");
    }


}

