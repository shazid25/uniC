#include<stdio.h>
#include<math.h>
int main()
{
    int num,input,p=2,power,sum=0;
    printf("input the value : ");
    scanf("%d",&input);

    for(num=1 ;num<=input; num+=2)
    {
        if(num==input)
        {
            printf("%d^%d",num,p);
        }
        else
        {
            printf("%d^%d + ",num,p);
        }
        power = pow(num,p);
        sum+=power;
        p+=2;
    }
    printf("\nthe summation of the series");
    printf("\n%d",sum);
}
