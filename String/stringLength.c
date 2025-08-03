#include<stdio.h>
#include<string.h>

int main()
{
    int i, count = 0;
    char s1[10];

    gets(s1);
    for(i=0; s1[i]!='\0'; i++)
    {
        count ++;
    }

    printf("%d", count);

    return 0;
}