// Modify your linear search program to find all occurrences of an element.



#include <stdio.h>

int main()
{
    int arr[100], n, i, key;
    int found = 0; // To track if any match is found

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    printf("Element %d found at positions: ", key);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("%d ", i + 1); // Print all positions where found
            found = 1; // Mark as found
        }
    }

    if (!found)
    {
        printf("Not found");
    }

    printf("\n");

    return 0;
}
