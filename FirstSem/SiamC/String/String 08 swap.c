#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k;
    char alpha[100],bravo[100],charlie[100];
    printf("input the value of alpha : ");
    gets(alpha);
    printf("input the value of bravo : ");
    gets(bravo);

    for(i=0 ;alpha[i]!='\0'; i++)
    {
        charlie[i] = alpha[i];
    }
    for(i=0 ;alpha[i]!='\0'; i++)
    {
        alpha[i] = bravo[i];
    }
    for(i=0 ;alpha[i]!='\0'; i++)
    {
        bravo[i] = charlie[i];
    }
    printf("printing the alpha : %s",alpha);
    printf("\nprinting the bravo : %s",bravo);
}
