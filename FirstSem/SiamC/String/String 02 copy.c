#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char alpha[100],bravo[100];
    printf("input the value of Alpha : ");
    gets(alpha);

    for(i=0 ;alpha[i]!='\0'; i++)
    {
        bravo[i]=alpha[i];
    }
    printf("copying the value in bravo : ");
    puts(bravo);
}
