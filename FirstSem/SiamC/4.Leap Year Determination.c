/*Write a C program to find whether a given year is a leap year or not.*/

#include<stdio.h>
int main()
{
    int n;
    printf("input the year ");
    scanf("%d", &n);

    if(n%4==0)
    {
        printf("leap year");
    }
    else
    {
        printf("not leap year");
    }
}
