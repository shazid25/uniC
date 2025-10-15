/*Write a C program to accept the height of a person in centimeters and categorize the person according to their height.*/


#include<stdio.h>
int main()
{
    int x,y,z;
    printf("input the value for x,y,z \n\n");
    scanf("%d%d%d", &x,&y,&z);

    if(x>y && x>z)
    {
        printf("\n x is greater");
    }
    else if(y>x && y>z)
    {
        printf("\n y is greater");
    }
    else if(z>x && z>y)
    {
        printf("\n z is greater");
    }
}
