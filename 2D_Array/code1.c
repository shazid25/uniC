// take a array of 4x5 ar[4][5]. print the array

#include<stdio.h>>
int main()
{
    int i, j, n, m;
    int ar[4][5];
    
    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }


    for(i=0; i<4; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("%d", ar[i][j]);
        }
        printf("\n");
    }


    return 0;
}