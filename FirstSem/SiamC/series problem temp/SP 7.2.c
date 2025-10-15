#include<stdio.h>
#include<math.h>
int main()
{
    int i,j=2,k=1,l,n;
    float m,jog;
    printf("input the value of n ");
    scanf("%d",&n);

    for(i=1;i<=n;i+=2)
    {
        l=pow(k,k);
        int sum=1;

        while(k!=i)
        {
            sum=sum*k;
        }
        printf("%d^%d/%d + ",i,j,sum);
        m=pow(i,j);
        jog=jog+(m/sum);
        printf("\nthe sum of this series ");
        printf("%d",jog);
        j+=2;
        k++;
    }

}
