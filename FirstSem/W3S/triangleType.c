#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c;
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if((a + b > c)&& (a + c > b) && (b + c > a)){

     if (a == b && b == c){
        printf("The triangle is Equilateral\n");
     }

     else if ( a == b || a ==c || b == c){
        printf(" The triangle is Isosceles\n");
     }

     else (a != b && a != c && b != c) {
        printf("The triangle is Scalene\n");
     }
   }

    else{
        printf("The triangle is not valid\n");
    }



    return 0;
}