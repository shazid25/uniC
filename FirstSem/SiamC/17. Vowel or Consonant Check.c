/*Write a C program to check whether an alphabet is a vowel or a consonant.*/


#include<stdio.h>
int main()
{
    char n,i;
    printf("input the character ");
    scanf("%c", &n);

    if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u')
    {
        printf("This is Vowel");
    }
    else
    {
        printf("This is Consonant");
    }

}
