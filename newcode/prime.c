#include<stdio.h>
int main(){
    int i, n, s=0;
    scanf("%d", &n);

    for(i = 2; i < n; i++){
        if(n % i == 0){
            s++;
        }
    }

    if(s == 0){
        printf("prime");
    }
    else{
        printf("not prime");
    }

    return 0;
}
