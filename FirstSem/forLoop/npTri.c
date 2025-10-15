
// #include <stdio.h>

// int main() {
//     int start, end, row, col;

//     printf("Enter the starting row number: ");
//     scanf("%d", &start);

//     printf("Enter the ending row number: ");
//     scanf("%d", &end);

//     if (start <= end) {
//         for (row = start; row <= end; row++) {
//             for (col = 1; col <= row; col++) {
//                 printf("*");
//             }
//             printf("\n");
//         }
//     } else {
//         printf("Invalid input: starting number must be less than or equal to ending number.\n");
//     }

//     return 0;
// }


#include<stdio.h>
int main(){
    
    int s, e, r, c;

    printf("Enter the starting value : ");
    scanf("%d", &s);

    printf("Enter the ending value: ");
    scanf("%d", &e);

    if (s <= e){
        for(r = s; r <= e; r++){
            for(c =1 ; c <= r; c++){
                printf("*");
            }
            printf("\n");
        }
       
    }

    else{
        printf("Invalid number");
    }



    return 0;
}