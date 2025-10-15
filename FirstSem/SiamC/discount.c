#include<stdio.h>
int main()
{
    int n;
    printf("input the number of customer ");
    scanf("%d", &n);

    if(n>=1 && n<=50)
    {
        if(n%7==0)
        {
            printf("7 percent discount");
        }
        else
        {
            printf("5 percent discount");
        }
    }
    else if(n>=51 && n<=100)
    {
        if(n%7==0)
        {
            printf("12 percent discount");
        }
        else
        {
            printf("10 percent discount");
        }
    }
    else if(n>=101 &&n<=150)
    {
        if(n%7==0)
        {
            printf("14 percent discount");
        }
        else
        {
            printf("12 percent discount");
        }
    }
    else if(n>=151 && n<=200)
    {
        if(n%7==0)
        {
            printf("17 percent discount");
        }
        else
        {
            printf("15 percent discount");
        }
    }


}
