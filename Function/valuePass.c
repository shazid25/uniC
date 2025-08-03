#include<stdio.h>
int abc(int i, int j)
{
    int k;
    k= i+j;
    printf("%d", k);
    return 0;
}

int main()
{
printf("hlw");
int x,y;

scanf("%d %d", &x, &y);
abc(x,y);
}
