// Sort an array of integers in descending order using Selection Sort.


#include <stdio.h>

int main() {
    int arr[100], n, temp, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (int i = 0; i < n - 1; i++) {
        max = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[max]) {
                max = j;
            }
        }

        if (max != i) {
            temp = arr[i];
            arr[i] = arr[max];
            arr[max] = temp;
        }
    }

    printf("Array sorted in descending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
