// Write a program to search for multiple values in an array using linear search.



#include <stdio.h>

int main()
{
    int arr[100], n, m, i, j, key, found;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of values to search: ");
    scanf("%d", &m);

    int keys[m]; // Array to store multiple search values

    printf("Enter %d values to search:\n", m);
    for (i = 0; i < m; i++)
    {
        scanf("%d", &keys[i]);
    }

    // Search each key one by one
    for (i = 0; i < m; i++)
    {
        key = keys[i];
        found = 0;

        printf("\nSearching for %d...\n", key);
        printf("Found at positions: ");

        for (j = 0; j < n; j++)
        {
            if (arr[j] == key)
            {
                printf("%d ", j + 1);
                found = 1;
            }
        }

        if (!found)
        {
            printf("Not found");
        }

        printf("\n");
    }

    return 0;
}
