#include<stdio.h>
int main()
{
    int height;
    printf("Enter the height in centimeters: ");
    scanf("%d", &height);
    

    if (height <= 150){
        printf("Khato manus\n");
    }

    else if (height > 150 && height <= 180){
        printf("Mondo na\n");
    }

    else {
        printf("Lomba onek\n");
    }

    return 0;
}