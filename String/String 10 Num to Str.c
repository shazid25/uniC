
#include<stdio.h>
#include<stdlib.h>  A
int main()
{
    char a[100];
    int num;

    gets(a);

    num = atoi(a);

    printf("%d\n", num);

    return 0;
}
