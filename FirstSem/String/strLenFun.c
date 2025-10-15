#include<stdio.h>
#include<string.h>

int main()
{
    int i, si;

    char s1[10];
    gets(s1);
    si = strlen(s1);
    printf("%d", si);
    
    return 0;
}