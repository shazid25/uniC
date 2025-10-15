// Write a C program to implement Binary Search on an unsorted array.



#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int n, int key)
{
    int left = 0, right = n - 1, mid;

    while (left <= right)
    {
        mid = (left + right) / 2;

        if (arr[mid] == key)
            return mid; // Element found

        else if (arr[mid] < key)
            left = mid + 1; // Search in right half
        else
            right = mid - 1; // Search in left half
    }

    return -1; // Element not found
}

// Function to sort the array (using Bubble Sort)
void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[100], n, key, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements (unsorted):\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    // Step 1: Sort the array first
    bubbleSort(arr, n);

    printf("\nArray after sorting: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Step 2: Perform Binary Search
    result = binarySearch(arr, n, key);

    if (result == -1)
        printf("\nElement not found.\n");
    else
        printf("\nElement %d found at index %d (in sorted array)\n", key, result);

    return 0;
}
