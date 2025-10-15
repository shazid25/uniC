/*Write a programme, where user will give you a number x
you need to print whether the number is odd or even number*/

#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    if(x%2 == 0)
    {
        printf("x is even");

    }
    else if(x%2 == 1)
    {
        printf("x is odd");
    }
}

