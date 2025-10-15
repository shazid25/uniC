#include <stdio.h>
#include <string.h>

int main() {
    int customer_id;
    char name[50];
    float units, amount, surcharge = 0, total_amount;

    // Input customer details
    printf("Enter Customer ID: ");
    scanf("%d", &customer_id);

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", name);  // To read string with spaces

    printf("Enter Units Consumed: ");
    scanf("%f", &units);

    // Calculate amount based on units consumed
    if (units <= 199) {
        amount = units * 1.20;
    } else if (units >= 200 && units < 400) {
        amount = units * 1.50;
    } else if (units >= 400 && units < 600) {
        amount = units * 1.80;
    } else {
        amount = units * 2.00;
    }

    // Apply surcharge if amount > 400
    if (amount > 400) {
        surcharge = amount * 0.15;
    }

    total_amount = amount + surcharge;

    // Apply minimum bill of Rs.100
    if (total_amount < 100) {
        total_amount = 100;
    }

    // Print the bill
    printf("\nElectricity Bill\n");
    printf("------------------------\n");
    printf("Customer ID       : %d\n", customer_id);
    printf("Customer Name     : %s\n", name);
    printf("Units Consumed    : %.2f\n", units);
    printf("Amount Charges    : Rs. %.2f\n", amount);
    printf("Surcharge         : Rs. %.2f\n", surcharge);
    printf("Total Bill Amount : Rs. %.2f\n", total_amount);

    return 0;
}





















// #include<stdio.h>
// int main(){
// float unit, cost, sum;
// printf("Enter the unit of electricity: ");
// scanf("%f", &unit);
// scanf("%f", cost);

// if (unit > 200){
//     sum = unit * 1.20;
//     printf("Your electricity bill is: %.2f\n", sum);
// }

// else if ( unit <= 200 && unit > 400){
//     sum = unit * 1.50;
//     printf("Your electricity bill is: %.2f\n", sum);
// }

// else if ( unit <= 400 && unit > 600){
//     sum = unit * 1.80;
//     printf("Your electricity bill is:%.2f\n", sum);

// }
// else{
//     sum = unit * 2.00;
//     printf("Your electricity bill is: %.2f\n", sum);
// }


// return 0;

// }