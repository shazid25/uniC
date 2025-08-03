#include<stdio.h>
int main()
{
    float marks[5];
    float total = 0.0, average, percentage;
    
    printf("Enter marks for 5 subjects:\n");

    for(int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }
    average = total / 5.0;
    percentage = (total / 500.0) * 100.0;

    printf("\nTotal Marks =%.2f\n", total);
    printf("Average Marks = %.2f\n", average);
    printf("Percentage =%.2f%%\n", percentage);



    return 0;
}
