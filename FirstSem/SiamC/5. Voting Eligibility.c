/*Write a C programme to read the age of a candidate and determine whether he is eligible to cast his/her own vote.*/


#include<stdio.h>
int main()
{
    int x;
    printf("input the value for x\n\n");

    scanf("%d", &x);

    if(x>=18)
    {
        printf("\n Eligible");
    }
    else
    {
        printf("\n Not Eligible");
    }
}
