/*Write a C program to read the age of a candidate and determine whether
he is eligible to cast his/her own vote*/

#include<stdio.h>
int main()
{
    int n;
    printf("input the age ");
    scanf("%d", &n);

    if(n>=18)
    {
        printf("Eligible");
    }
    else
    {
         printf("Not Eligible");
    }
}
