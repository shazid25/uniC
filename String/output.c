#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char s1[10] = "abdullah";

    for(i = 0; s1[i]!='\0'; i++)
    {
        printf("%c", s1[i]);
    }

    return 0;
}
