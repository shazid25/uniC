#include<stdio.h>
int main()
{
    int num,input,p=2;
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
        p = p+num;
    }
}
