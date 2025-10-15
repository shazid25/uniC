#include<stdio.h>
int main()
{
    int A,B,H;
    float Area;

    printf("The value of A,B,H respectively\n");

    scanf("%d %d %d", &A, &B, &H);

    Area = (A+B)/2*H;

    printf("%f", Area);

    return 0;
}
