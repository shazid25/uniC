
#include<stdio.h>
#include<string.h>
int main()
{
    int i, length;
    char a[100], b[100];

    gets(a);
    length = strlen(a);

    for(i = 0; i < length; i++)
    {
        b[i] = a[length - 1 - i];
    }
    b[length] = '\0';

    puts(b);
}
