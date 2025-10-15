#include <stdio.h>

int main()
{
    int num;
    char str[20];

    printf("Enter a number: ");
    scanf("%d", &num);

    sprintf(str, "%d", num);

    printf("String is: %s\n", str);

    return 0;
}

