#include<stdio.h>
int main(){
    int i, n , m;

    printf("Enter the number: ");
    // printf("Enter the 1st number: ");

    scanf("%d %d", &n, &m);
    

    for (i = n ; i <= m; i++)
    
    {
        printf("%d ", i);
    }

    return 0;
}
