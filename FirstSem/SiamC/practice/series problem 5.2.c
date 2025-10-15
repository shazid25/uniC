#include<stdio.h>
#include<math.h>
int main()
{
    int num,det,input,power,p=2,multi=1,fsum;
    float sum=0;
    printf("input the value : ");
    scanf("%d",&input);

    for(num=1 ;num<=input; num+=2)
    {
        multi = 1;
        for(det=num ;det>=1; det--)
        {
            multi = multi*det;
        }
        if(num==input)
        {
            printf("%d^%d/%d",num,p,multi);
        }
        else
        {
            printf("%d^%d/%d + ",num,p,multi);
        }
        p+=2;
        power = pow(num,p);
        sum = sum+power;
        fsum = sum/multi;
    }
    printf("\nthe summation of this series");
    printf("\n%f",sum);

}

