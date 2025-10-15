// Write a program that finds the smallest and largest element in an array using linear search.



#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int smallest, largest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Initialize smallest and largest with the first element
    smallest = largest = arr[0];

    // Linear search to find smallest and largest
    for (i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("\nSmallest element = %d\n", smallest);
    printf("Largest element = %d\n", largest);

    return 0;
}
