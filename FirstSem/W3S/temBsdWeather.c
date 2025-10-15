#include <stdio.h>

int main() {
    int tem;

    printf("Enter the temperature in centigrade: ");
    scanf("%d", &tem);

    if (tem < 0) {
        printf("Freezing weather\n");
    }
    else if (tem >= 0 && tem < 10) {
        printf("Very Cold weather\n");
    }
    else if (tem >= 10 && tem < 20) {
        printf("Cold weather\n");
    }
    else if (tem >= 20 && tem < 30) {
        printf("Normal in Temp\n");
    }
    else if (tem >= 30 && tem < 40) {
        printf("It's Hot\n");
    }
    else {
        printf("It's Very Hot\n");
    }

    return 0;
}
