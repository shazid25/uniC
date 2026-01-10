// Modify Binary Search to return the nearest smaller or larger element if the
// exact element is not found.


#include <stdio.h>

int main() {
    int arr[100], n, key, i, j, temp, mid, low, high;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0; high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            printf("Exact element found: %d\n", arr[mid]);
            return 0;
        } else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (high >= 0)
        printf("Nearest smaller element: %d\n", arr[high]);
    if (low < n)
        printf("Nearest larger element: %d\n", arr[low]);

    return 0;
}
