#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100], s2[100], s3[100];
    int i, v = 0, c = 0;

    gets(s1);

    for(i = 0; s1[i] != '\0'; i++)
    {



    if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u' || s1[i]=='A' || s1[i]=='E' || s1[i]=='I' || s1[i]=='O' || s1[i]=='U')
        {
            s2[v++] = s1[i];
        }
    else
        {
            s3[c++] = s1[i];
        }
    }

    s2[v] = '\0';
    s3[c] = '\0';

    printf("Vowels: %s\n", s2);
    printf("Consonants: %s\n", s3);

    return 0;
}
