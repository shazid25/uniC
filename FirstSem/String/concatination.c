#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100], s2[100], s[200];
    int i, j;

    gets(s1);
    gets(s2);

    for(i = 0; s1[i] != '\0'; i++)
    {
        s[i] = s1[i];
    }

    for(j = 0; s2[j] != '\0'; j++)
    {
        s[i + j] = s2[j];
    }

    printf("%c", s);

    return 0;
}
