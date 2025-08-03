#include<stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter the three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3)
     {
        printf("Number1 is the greatest.");
    }
    else if(num2 > num1 && num2 > num3)
     {  
        printf("Number2 is the greatest.");
    }
    else {
        printf("Number3 is the greatest.");
    }

    return 0;
}
