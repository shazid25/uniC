// Modify Binary Search to return the nearest smaller or larger element if the
// exact element is not found.


#include <stdio.h>

int main()
{
    int arr[100], n, key;
    int left, right, mid;
    int nearestSmaller = -1, nearestLarger = -1; // Track nearest elements

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in ascending order:\n", n);
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
            printf("Element %d found at index %d\n", arr[mid], mid);
            return 0;
        }
        else if (arr[mid] < key)
        {
            nearestSmaller = arr[mid]; // Update nearest smaller
            left = mid + 1;
        }
        else
        {
            nearestLarger = arr[mid]; // Update nearest larger
            right = mid - 1;
        }
    }

    printf("Element not found.\n");
    if (nearestSmaller != -1)
        printf("Nearest smaller element: %d\n", nearestSmaller);
    else
        printf("No smaller element exists.\n");

    if (nearestLarger != -1)
        printf("Nearest larger element: %d\n", nearestLarger);
    else
        printf("No larger element exists.\n");

    return 0;
}
