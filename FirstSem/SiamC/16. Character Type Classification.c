/*Write a C program to check
whether a character is an alphabet, digit or special character.*/

#include<stdio.h>
int main()
{
    char n;
    printf("input the value ");
    scanf("%c",&n);

    if(n>='0' && n<='9')
    {
        printf("this is a digit");
    }
    else if(n>='A' && n<='z')
    {
        printf("this is a Alphabet");
    }
    else
    {
        printf("this is a special character");
    }


}
