#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Ja vote de\n");
    } 
    else {
        printf("Arektu boro ho\n");
    }

    return 0;
}
