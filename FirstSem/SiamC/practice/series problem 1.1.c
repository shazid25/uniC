#include<stdio.h>
int main()
{
    int num,input;
    printf("input the number : ");
    scanf("%d",&input);
    for(num=1 ;num<=input; num++)
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
