// #include<stdio.h>
// #include<math.h>
// int main(){
//     int i, j, n;
//     printf("Enter your num: ");
//     scanf("%d", &n);
   
//     for(i = 1; i <= 10; i++){
//         for(j = 1; j <= n; j++){
            
//             printf("%dx%d = %d", i, j , i * j);
//         }
//         printf("\n");
//     }


//     return 0;
// }


#include <stdio.h>  // Include the standard input/output header file.

int main() {
    int j, i, n;  // Declare variables 'j' and 'i' for loop counters, and 'n' for user input.

    printf("Input upto the table number starting from 1 : ");  // Print a message to prompt user input.
    scanf("%d", &n);  // Read the value of 'n' from the user.
    printf("Multiplication table from 1 to %d \n", n);  // Print a message showing the range of the table.

    for (i = 1; i <= 10; i++) {  // Start an outer loop for the numbers 1 to 10.
        for (j = 1; j <= n; j++) {  // Start an inner loop for the table range.
            printf("%dx%d = %d, ", j, i, i * j);  // Print the multiplication expression and result.
        }
        printf("\n");  // Print a newline to move to the next row of the table.
    }

    return 0;  // Indicate that the program has executed successfully.
}

