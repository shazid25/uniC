#include<stdio.h>
int main(){
    int n, i, s=3;


    scanf("%d", &n);
    

    for (i = 2 ; i <= n; i++)
    
    {
     if (i%5 == 0){
        s = s + i;
        printf("%d ",s);
     }
    }

    return 0;
}
