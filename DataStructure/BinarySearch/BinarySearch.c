#include <stdio.h>

int main()
{

    int arr[100], n, key;

    int left, right, mid; 

   
    printf("Enter number of elements: ");

    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);

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
            printf("Element %d is found at index %d\n",
                   arr[mid], mid);
        
            return 0;
        }
        else if (arr[mid] < key)
        {
            left = mid + 1; 
        }
        else
        {
            right = mid - 1; 
        }
    }
    printf("Element is not found\n");

    return 0;
}