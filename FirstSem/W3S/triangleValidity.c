#include<stdio.h>

int main(){
    int a, b, c, sum;
    printf("Enter the three sides of the triangle:");
    scanf("%d %d %d", &a, &b, &c);
     
    sum = a + b + c;

    if ( sum == 180){
        printf("The triangle is valid\n");
    }
    else{
        printf("The triangle is not valid\n");
    }

    return 0;
}