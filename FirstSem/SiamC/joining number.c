#include<stdio.h>
int main()
{
    int n,rem,count=0;
    scanf("%d",&n);

    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        count++;
        printf("%d",rem);
    }

}
