#include<stdio.h>

int main(){
    int m,s,sum;
    printf("Enter the main balance of the product: ");
    scanf("%d", &m);
    printf("Enter the seeling price of the product: ");
    scanf("%d", &s);

    if (m > s){
        sum = m - s;
        printf("The profit is: %d\n", sum);
    }
    else if(m < s){
        sum = s - m;
        printf("The loss is: %d\n", sum);
    }
    else{
        printf("No profit no loss\n");
    }
    



    return 0;
}
