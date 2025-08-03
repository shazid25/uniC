#include <stdio.h>

int main() {
    int choice;
    float area, radius, side, length, breadth, base, height;


    printf("Choose a shape to calculate area:\n");
    printf("1. Circle\n");
    printf("2. Square\n");
    printf("3. Rectangle\n");
    printf("4. Triangle\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    
    if (choice == 1) {
        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);
        area = 3.14 * radius * radius;
        printf("The area is : %f\n", area);
    }
    else if (choice == 2) {
        printf("Enter the side of the square: ");
        scanf("%f", &side);
        area = side * side;
        printf("The area is : %f\n", area);
    }
    else if (choice == 3) {
        printf("Enter the length and breadth of the rectangle: ");
        scanf("%f %f", &length, &breadth);
        area = length * breadth;
        printf("The area is : %f\n", area);
    }
    else if (choice == 4) {
        printf("Enter the base and height of the triangle: ");
        scanf("%f %f", &base, &height);
        area = 0.5 * base * height;
        printf("The area is : %f\n", area);
    }
    else {
        printf("Invalid choice! Please select a number between 1 and 4.\n");
    }

    return 0;
}
