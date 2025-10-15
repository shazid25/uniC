/*Write a C program to check whether a given number is positive or negative.*/

#include<stdio.h>
int main()
{
    int x;
    printf("input the value for x\n\n");

    scanf("%d", &x);

    if(x>0)
    {
        printf("\n x is positive");
    }
    else if(x<0)
    {
        printf("\n x is negative");
    }
}
