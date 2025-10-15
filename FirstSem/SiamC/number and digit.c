//digit separation
// user give you a value of n. you  need to separate the digits of that number.

#include<stdio.h>
int main()
{
    int i,n,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        printf("%d\n",r);
    }
}
