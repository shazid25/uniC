#include<stdio.h>
int main ()
{
    int MajorAxis, MinorAxis;
    float Area;

    printf("The value of MajorAxis and MinorAxis respectively\n");

    scanf("%d %d", &MajorAxis, &MinorAxis);

    Area = 3.1416*MajorAxis*MinorAxis;

    printf("%f", Area);

    return 0;

}
