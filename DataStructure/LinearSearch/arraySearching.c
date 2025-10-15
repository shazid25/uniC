// Linear Search Algorithm

// The algorithm for linear search is relatively simple. The procedure starts at the very first index of the input array to
// be searched.

// Step 1 − Start from the 0th index of the input array, compare the key value with the value present in the 0th index.

// Step 2 − If the value matches with the key, return the position at which the value was found.

// Step 3 − If the value does not match with the key, compare the next element in the array.

// Step 4 − Repeat Step 3 until there is a match found. Return the position at which the match was found.

// Step 5 − If it is an unsuccessful search, print that the element is not present in the array and exit the program.




#include <stdio.h>

int main()
{

    int arr[100], n, i, key;

    printf("Enter number of elements: ");

    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");

    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {

        if (arr[i] == key)
        {

            printf("Element found at position %d\n", i + 1);

            return 0; // Stop searching if found
        }
    }

    printf("Element not found\n");

    return 0;
}