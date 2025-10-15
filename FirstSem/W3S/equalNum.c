#include<stdio.h>
int main(){
    int num1, num2;
    
    printf("Imput the values of num1 and num2: ");
    scanf("&d, &d", &num1, num2);

    if (num1==num2){
        printf("Number1 and Number2 is equal\n");

    }
    else{
      printf("Number1 and Number2 is not equal\n");
    }


    return 0;
}