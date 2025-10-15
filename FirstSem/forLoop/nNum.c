


// #include <stdio.h>

// int main() {
//     int n, m, i;

//     // Input from user
//     printf("Enter the first number (n): ");
//     scanf("%d", &n);

//     printf("Enter the second number (m): ");
//     scanf("%d", &m);

//     // Print numbers from n to m (increasing or decreasing)
//     if(n <= m) {
//         for(i = n; i <= m; i++) {
//             printf("%d ", i);
//         }
//     } else {
//         for(i = n; i >= m; i--) {
//             printf("%d ", i);
//         }
//     }

//     printf("\n");
//     return 0;
// }



#include<stdio.h>
int main()
{

    int n, m, i;
    printf("Enter the first number: ");
    scanf("%d", &n);

    printf("Enter the second number: ");
    scanf("%d", &m);

    if(n <=m ) {
        for(i = n; i <= m; i++){
            printf("%d\n", i);
        }

    }

    else{
 printf("Invalid number");
 
    return 0;
}
}

