#include<stdio.h>
int main()
{
    char n;
    scanf("%c",&n);

    if(n>='0' && n<='9')
    {
        printf("the character is digit");
    }
    else
    {
        printf("the character is not digit");
    }
}
