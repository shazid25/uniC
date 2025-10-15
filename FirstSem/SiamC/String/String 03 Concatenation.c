#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char alpha[100],bravo[100],charlie[100];
    printf("input the value of alpha : ");
    gets(alpha);
    printf("input the value of bravo : ");
    gets(bravo);

    for(i=0 ;alpha[i]!='\0'; i++)
    {
        charlie[i]=alpha[i];
    }
    for(j=0 ;bravo[j]!='\0'; j++)
    {
        charlie[i+j] = bravo[j];
    }
    charlie[i+j]='\0';
    printf("concatenation of alpha & bravo : ");s
    puts(charlie);

}
