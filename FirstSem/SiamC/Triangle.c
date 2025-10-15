#include<stdio.h>
int main ()
{
    int Base, Height;
    float Area;

    printf("The value of Base and Height respectively\n");

    scanf("%d %d", &Base, &Height);

    Area = 0.5*Base*Height;

    printf("\nArea of the triangle: %f\n", Area);
    return 0;

}
