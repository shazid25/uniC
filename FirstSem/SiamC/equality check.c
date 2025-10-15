/*Write a C program to accept two integers and check whether they are equal or not.*/

#include<stdio.h>
int main()
{
    int i,j;
    printf("input the numbers  ");
    scanf("%d %d", &i,&j);
    if(i==j)
    {
        printf("the numbers are equal");
    }
    else
    {
        printf("the numbers are not equal");
    }
}
