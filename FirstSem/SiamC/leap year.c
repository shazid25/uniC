/* LEAP YEAR DETERMINATION

   Write a C program to find whether a given year is a leap year or not*/

#include<stdio.h>
int main()
{
    int lp;
    scanf("%d", &lp);

    if(lp%4 == 0)
    {
        printf("leap year");
    }
    else
    {
        printf("not leap year");
    }
}
