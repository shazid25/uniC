#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0;
    char alpha[100];
    printf("input the value of Alpha : ");
    gets(alpha);
    for(i=0 ;alpha[i]!='\0'; i++)
    {
        count++;
    }
    printf("The lenght of Alpha : %d",count);
}
