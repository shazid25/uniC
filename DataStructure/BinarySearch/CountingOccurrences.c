// Modify Binary Search to count how many times an element appears in the
// array.


#include <stdio.h>

// Function to perform binary search and return one occurrence
int binarySearch(int arr[], int n, int key)
{
    int left = 0, right = n - 1, mid;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == key)
            return mid; // Element found
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // Element not found
}

int main()
{
    int arr[100], n, key;
    int index, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in ascending order:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    // Step 1: Find one occurrence using binary search
    index = binarySearch(arr, n, key);

    if (index == -1)
    {
        printf("Element %d not found.\n", key);
    }
    else
    {
        // Step 2: Count occurrences
        count = 1; // Start with the found element

        // Count duplicates on the left
        int i = index - 1;
        while (i >= 0 && arr[i] == key)
        {
            count++;
            i--;
        }

        // Count duplicates on the right
        i = index + 1;
        while (i < n && arr[i] == key)
        {
            count++;
            i++;
        }

        printf("Element %d appears %d time(s) in the array.\n", key, count);
    }

    return 0;
}
