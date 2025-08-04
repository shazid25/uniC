#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[100],b[100];

    gets(a);

    for(i=0 ;a[i]!='\0'; i++)
    {
        b[i] = a[i]+32;
    }

     b[i] = '\0';
    puts(b);
}
