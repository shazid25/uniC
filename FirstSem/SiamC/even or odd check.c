/*Write a C program to check whether a given number is even or odd.*/

#include<stdio.h>
int main()
{
    int n;
    printf("input the numbers ");
    scanf("%d", &n);

    if(n%2==1)
    {
        printf("odd number");
    }
    else
    {
        printf("even number");
    }
}
