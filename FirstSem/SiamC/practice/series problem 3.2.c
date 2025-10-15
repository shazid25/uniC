#include<stdio.h>
#include<math.h>
int main()
{
    int num,input,sum=0,square;
    printf("input the value : ");
    scanf("%d",&input);

    for(num=1 ;num<=input; num+=2)
    {
        if(num==input)
        {
            printf("%d^2",num);
        }
        else
        {
            printf("%d^2 + ",num);
        }
        square= pow(num,2);
        sum = sum + square;
    }
    printf("\nthe summation of the series");
    printf("\n%d",sum);
}
