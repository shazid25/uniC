#include<stdio.h>
int main(){
    int i, s=0;

    for (i =1; i<=5; i++){
        s = s + i;
    }
    printf("%d", s);
    return 0;
}