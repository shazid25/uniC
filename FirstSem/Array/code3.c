#include<stdio.h>
int main(){
    int i, ar[10];
    for(i=1;i<10;i++)
    {
        scanf("%d", &ar[i]);
    }
    for(i=1;i<10;i++)
    {
        printf("%d", ar[i]);
    }
    
    return 0;
}