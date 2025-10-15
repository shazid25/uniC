#include<stdio.h>
int main(){
    int n, m, sum = 0, count=0, i;
    float avg;

    printf("Enter the first num: ");
    scanf("%d", &n);

    printf("Enter the second num: ");
    scanf("%d", &m);

    if( n <= m){
        for( i = n; i <= m; i++){
            count++;
            sum = sum + i;
            avg = sum / count;
        }
        printf("The sum is: %d\n", sum);
        printf("The average is: %.2f\n", avg);
        }

        else{
            printf("Invalid number");
        }

   return 0;
}