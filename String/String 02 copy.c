#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char a[100],b[100];
    printf("input the value of a : ");
    gets(a);

    for(i=0 ;a[i]!='\0'; i++)
    {
        b[i]=a[i];
    }
    printf("copying the value in b : ");
    puts(b);
}
