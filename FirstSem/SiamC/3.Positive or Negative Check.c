/*Write a C program to check whether a given number is positive or negative.*/

#include<stdio.h>
int main()
{
    int n;
    printf("input the number ");
    scanf("%d", &n);

    if(n<0)
    {
        printf("the number is negative");
    }
    else
    {
        printf("the number is positive");
    }
}
