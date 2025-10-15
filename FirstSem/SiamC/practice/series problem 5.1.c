#include<stdio.h>
int main()
{
   int num,input,power=2;
   printf("input the value of : ") ;
   scanf("%d",&input);

   for(num=1 ;num<=input; num+=2)
   {
       if(num==input)
       {
           printf("%d^%d/%d",num,power,num);
       }
       else
       {
           printf("%d^%d/%d + ",num,power,num);
       }
       power+=2;
   }

}
