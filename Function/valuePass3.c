#include<stdio.h>
int add(int i, int j)
{
    int k;
    k = i + j;
    return k;
}

int sub(int i, int j)
{
 int k;
 k = i-j;
 return k;
}

int main()
{
    int a,b,c,d,x1,x2,x;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    x1=add(a,b);
    x2= add(c,d);

    x = sub(x1, x2);
    printf("%d", x);
    return 0;
}
