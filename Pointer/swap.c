#include <stdio.h>

int main()
{
    int x = 10;
    int y = 5;
    int *pt, *qt;
    int t;

    pt = &x;
    qt = &y;

    // Swapping using pointer dereferencing
    t = *pt;
    *pt = *qt;
    *qt = t;

    // Output the result
    printf("After swapping:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}