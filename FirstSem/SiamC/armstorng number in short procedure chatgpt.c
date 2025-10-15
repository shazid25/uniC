#include<stdio.h>
#include<math.h>
int main()
{
    int n, x, rem, count = 0, sum = 0;
    scanf("%d", &n);  // Input the number

    x = n;  // Initialize x with the value of n

    // Calculate the number of digits (count) and sum of the digits raised to the power of count
    while(x != 0)
    {
        rem = x % 10;  // Get the last digit
        x = x / 10;    // Remove the last digit
        count++;       // Increment the digit count
        sum = sum + pow(rem, count);  // Add the power of the digit to the sum
    }

    // Check if the sum equals the original number (Armstrong condition)
    if(sum == n)
    {
        printf("armstrong");  // If it matches, print Armstrong
    }
    else
    {
        printf("non armstrong");  // Otherwise, print non Armstrong
    }

    return 0;
}
