#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char a[100], b[100], c[100];

    printf("Input the value of a: ");
    gets(a);

    printf("Input the value of b: ");
    gets(b);

    for(i = 0; a[i] != '\0'; i++)
    {
        c[i] = a[i];
    }
    c[i] = '\0';

    for(i = 0; b[i] != '\0'; i++)
    {
        a[i] = b[i];
    }
    a[i] = '\0';

    for(i = 0; c[i] != '\0'; i++)
    {
        b[i] = c[i];
    }
    b[i] = '\0';

    printf("After swapping:\n");
    printf("a: %s\n", a);
    printf("b: %s\n", b);

    return 0;
}
