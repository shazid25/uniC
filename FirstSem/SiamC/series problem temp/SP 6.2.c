#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,n;
    float m,jog=0;
    printf("input the value of n ");
    scanf("%d",&n);
    j=2;
    k=2;

    for(i=1;i<=n;i+=2)
    {
        int sum=1;

        for(l=k;l>=1;l--)
        {

            sum=sum*l;
        }
        printf("%d^%d/%d + ",i,j,sum);

        m=pow(i,j);
        jog = jog +(m/sum);
        j+=2;
        k+=2;
    }
    printf("\nthe sum of this series ");
    printf("%f",jog);

}
