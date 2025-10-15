#include <stdio.h>

int main()
{
    int x = 10;
    int y = 5;
    int *pt, *qt;
    int t;

    pt = &x;
    qt = &y;

    t = *pt;
    *pt = *qt;
    *qt = t;

    printf("After swapping:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}