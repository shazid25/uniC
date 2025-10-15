/*Write a C program to find whether a given year is a leap year or not.*/

#include<stdio.h>
int main()
{
    int x;
    printf("input the value for x\n\n");

    scanf("%d", &x);

    if(x%4==0)
    {
        printf("\nleap year");
    }
    else
    {
        printf("\n not leap year");
    }
}
