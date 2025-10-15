#include<stdio.h>
int main()
{
    int num,input,sum=0;
    printf("input the value : ");
    scanf("%d",&input);

    for(num=1 ;num<=input; num+=2)
    {
        if(num==input)
        {
            printf("%d",num);
        }
        else
        {
            printf("%d + ",num);
        }
        sum = sum + num;
    }
    printf("\nthe summation of the series");
    printf("\n%d",sum);
}

