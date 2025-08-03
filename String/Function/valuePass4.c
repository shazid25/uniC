#include<stdio.h>
#include<math.h>
int add(int i, int j)
{
    int k;
    k = i + j;
    return k;
}

int dev(int x, int y)
{
 int k;
 k = pow(x,y);
 return k;
}

int min (int i, int j)
{
    int k;
    k = i - j;
    return k;
}

int mult(int i, int j)
{
 int k;
 k = i*j;
 return k;
}

float squ(int i, int j)
{
 int k;
 k = sqrt(i*j);
 return k;
}


int main()
{
    int a,b,c,d,y1,y2,y;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    y1=add(a,b);
    y2= add(c,d);

    y = sub(y1, y2);
    printf("%d", y);
    return 0;
}

