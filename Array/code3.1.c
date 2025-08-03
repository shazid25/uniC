#include<stdio.h>
int main(){
    int i ;
    int ar[4], br[5];

    for(i=0;i<4;i++)
    {
        scanf("%d", &ar[i]);
    }

    for(i=0;i<5;i++)
    {
    scanf("%d", &br[i]);
    }
    printf("printing first array\n");
    
    for(i=0;i<4;i++)
    {
        scanf("%d", &ar[i]);
    }

    printf("printing secind array\n");

    for(i=0;i<5;i++)
    {
        scanf("%d", &br[i]);
    }
    
    return 0;
}