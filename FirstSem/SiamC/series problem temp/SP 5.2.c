#include<stdio.h>
#include<math.h>
int main()
{
    int i,j=0,k,l,n;
    float jog=0;
    printf("input the value of n ");
    scanf("%d",&n);


    for(i=1;i<=n;i+=2)
    {
        int sum=1;
        j+=2;
        for(k=i;k>=1;k--)
        {

            sum=sum*k;

        }
        printf("%d^%d/%d + ",i,j,sum);

        l=pow(i,j);
        jog=jog+(l/sum);

    }
    printf("\nthe sum of this series ");
    printf("%f",jog);

}

