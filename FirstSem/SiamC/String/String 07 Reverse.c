#include<stdio.h>
#include<string.h>
int main()
{
    int i,length;
    char alpha[100];
    printf("input the value of alpha : ");
    gets(alpha);
    length = strlen(alpha);

    printf("reverse : ");
    for(i=length-1 ;i>=0; i--)
    {
        printf("%c",alpha[i]);
    }

    //puts(bravo);
}

