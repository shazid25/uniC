#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char alpha[100],bravo[100];
    printf("input the value of alpha : ");
    gets(alpha);

    for(i=0 ;alpha[i]!='\0'; i++)
    {
        bravo[i] = alpha[i]-32;
    }
    printf("Upper Case : ");
    puts(bravo);
}
