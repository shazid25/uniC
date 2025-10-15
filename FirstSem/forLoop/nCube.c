#include<stdio.h>
#include<math.h>
int main(){
    int n, m, i, cube;

    printf("Enter the first num: ");
    scanf("%d", &n);

    printf("Enter the second num: ");
    scanf("%d", &m);

    
    if( n <= m){
        for( i = n; i <= m; i++){
        
            cube = pow(i, 3);
            printf("%d\n", cube);
        }
    }
    else{
        printf("Invalid num");
    }


    return 0;
}