#include <stdio.h>
#include <stdlib.h>

void rotate_left(int *arr, int n) {
    if (n <= 1) return;
    int saved = arr[0];
    for (int idx = 1; idx < n; ++idx) {
        arr[idx - 1] = arr[idx];
    }
    arr[n - 1] = saved;
}

int main(void) {
    int n;
    if (printf("Number of elements: "), fflush(stdout), scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid size\n");
        return 1;
    }

    int *data = malloc((size_t)n * sizeof *data);
    if (!data) {
        perror("malloc");
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        if (printf("element[%d]: ", i), fflush(stdout), scanf("%d", &data[i]) != 1) {
            fprintf(stderr, "Input error\n");
            free(data);
            return 1;
        }
    }

    printf("Before rotation: ");
    for (int i = 0; i < n; ++i) printf("%d ", data[i]);
    putchar('\n');

    rotate_left(data, n);

    printf("After rotation:  ");
    for (int i = 0; i < n; ++i) printf("%d ", data[i]);
    putchar('\n');

    free(data);
    return 0;
}
