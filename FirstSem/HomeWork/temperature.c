#include<stdio.h>>
int main()
{

float celsius, fahrenheit;
printf("Enter temperature in celsius: ");
scanf("%f", &celsius);

printf("Enter temperature in fahrenheit: ");
scanf("%f", &fahrenheit);

fahrenheit = (celsius * 9 / 5) + 32;

printf  ("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);


    return 0;
}


// #include<stdio.h>

// int main()
// {

// float celsius, fahrenheit;

// printf("Enter temperature in celsius: ");
// scanf("%f", &celsius);

// printf("Enter temperature in fahrenheit: ");
// scanf("%f", &fahrenheit);

// fahrenheit = (celsius * 9 / 5) + 32;
// printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

//     return 0;
// }