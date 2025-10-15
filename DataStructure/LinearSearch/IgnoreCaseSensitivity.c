// Modify linear search to ignore case sensitivity when searching for characters in a character
// array.



#include <stdio.h>
#include <ctype.h> // for tolower() or toupper()

int main()
{
    char arr[100], key;
    int i, found = 0;

    printf("Enter a string (character array): ");
    gets(arr); // for simplicity; use fgets() in secure code

    printf("Enter character to search: ");
    scanf(" %c", &key); // space before %c to ignore newline

    // Convert key to lowercase for case-insensitive comparison
    key = tolower(key);

    printf("\nSearching for '%c' (case-insensitive)...\n", key);

    for (i = 0; arr[i] != '\0'; i++)
    {
        if (tolower(arr[i]) == key) // compare both in lowercase
        {
            printf("Character '%c' found at position %d\n", arr[i], i + 1);
            found = 1;
        }
    }

    if (!found)
    {
        printf("Character not found.\n");
    }

    return 0;
}
