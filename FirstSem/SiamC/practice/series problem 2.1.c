#include<stdio.h>
int main()
{
    int num,input;
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
    }
}
