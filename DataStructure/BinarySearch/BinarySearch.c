// Binary Search Algorithm

// Step 1 − Select the middle item in the array and compare it with the key value to be searched.
// If it is matched, return the position of the median.

// Step 2 − If it does not match the key value, check if the key value is either greater than or less
// than the median value.

// Step 3 − If the key is greater, perform the search in the right sub-array; but if the key is lower
// than the median value, perform the search in the left sub-array.

// Step 4 − Repeat Steps 1, 2 and 3 iteratively, until the size of sub-array becomes 1.

// Step 5 − If the key value does not exist in the array, then the algorithm returns an
// unsuccessful search.

// Example-1:

#include <stdio.h>

int main()
{

    int arr[100], n, key;

    int left, right, mid; // Pointers for searching

    // Step 1: Take input for array size

    printf("Enter number of elements: ");

    scanf("%d", &n);

    // Step 2: Take input for sorted array

    printf("Enter %d sorted elements:\n", n);

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }

    // Step 3: Take input for the element to search

    printf("Enter element to search: ");

    scanf("%d", &key);

    // Step 4: Initialize search pointers

    left = 0;

    right = n - 1;

    // Step 5: Perform Binary Search using a loop

    while (left <= right)
    {
        mid = (left + right) / 2; // Find the middle index
        if (arr[mid] == key)
        {
            printf("Element %d is found at index %d\n",
                   arr[mid], mid);
            // Step 6: Element found
            return 0;
        }
        else if (arr[mid] < key)
        {
            left = mid + 1; // Search in the right half
        }
        else
        {
            right = mid - 1; // Search in the left half
        }
    }
    // Step 7: If not found, print message
    printf("Element is not found\n");

    return 0;
}