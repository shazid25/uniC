#include<stdio.h>
#include<math.h>
int main(){
    int n, m, i, sum=1;
    printf("Enter the first num: ");
    scanf("%d", &n);
    
    printf("Enter the second num: ");
    scanf("%d", &m);

    if( n<= m){

        for( i = n; i <= m; i++)
          {
            sum = i * m;
            printf("%d\n", sum);
          }
        
    }

    else{
        printf("Invalid num");
    }

    return 0;

}