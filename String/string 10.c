#include <stdio.h>

int main()
{
    int num;
    char str[20];  // Enough to hold the number as a string

    printf("Enter a number: ");
    scanf("%d", &num);

    sprintf(str, "%d", num);  // Converts integer to string and stores in str

    printf("String is: %s\n", str);

    return 0;
}

