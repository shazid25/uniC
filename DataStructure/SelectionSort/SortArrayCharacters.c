// Sort an array of characters (string) using Selection Sort.


#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, j, min;

    printf("Enter a string: ");
    gets(str); // or use fgets(str,100,stdin)

    int n = strlen(str);

    // Selection Sort for characters (ascending)
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (str[j] < str[min]) {
                min = j;
            }
        }

        // Swap
        if (min != i) {
            temp = str[i];
            str[i] = str[min];
            str[min] = temp;
        }
    }

    printf("Sorted string: %s\n", str);
    return 0;
}
