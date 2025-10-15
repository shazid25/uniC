// Modify Binary Search to work on an array sorted in descending order.



#include <stdio.h>

int main()
{
    int arr[100], n, key;
    int left, right, mid;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in descending order:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    left = 0;
    right = n - 1;

    while (left <= right)
    {
        mid = (left + right) / 2;

        if (arr[mid] == key)
        {
            printf("Element %d is found at index %d\n", arr[mid], mid);
            return 0;
        }

        // Reverse comparison logic for descending order
        else if (arr[mid] > key)
        {
            left = mid + 1; // Move right
        }
        else
        {
            right = mid - 1; // Move left
        }
    }

    printf("Element not found\n");

    return 0;
}
