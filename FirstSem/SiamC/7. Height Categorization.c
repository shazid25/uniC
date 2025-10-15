/*Write a C program to accept the height of a person in centimeters and categorize the person according to their height.*/

#include<stdio.h>
int main()
{
    int x;
    printf("input the value for x \n\n");
    scanf("%d",&x);

    if(x<150)
    {
         printf("the person is  Dwarf");
    }
    else if(x>=150 && x<165)
    {
        printf("the person's height is average");
    }
    else if(x>=165 && x<195)
    {
        printf("the person is  tall");
    }
    else
    {
        printf("the person's height is abnormal");
    }
}
