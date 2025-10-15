/*Write a C program to check whether a triangle can be formed with
the given values for the angles.*/


#include<stdio.h>
int main()
{
    int x,y,z;
    printf("the value of x,y,z ");
    scanf("%d%d%d", &x,&y,&z);

    if(x+y+z==180)
    {
        printf("triangle can be formed");
    }
    else
    {
        printf("triangle can't be formed");
    }
}
