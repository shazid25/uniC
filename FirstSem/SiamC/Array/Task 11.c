#include<stdio.h>
int main()
{
   int i,sum=0,n;
   printf("input the size of index\n");
   scanf("%d",&n);
   int ar[n];

   printf("input the value of array\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&ar[i]);
   }

   printf("Print the array\n");
   for(i=0;i<n;i++)
   {
       if(i%2==1)
       {
          printf("%d",ar[i]);
          sum=sum+ar[i];
       }

   }
   printf("\nthe summation of this array\n");
    printf("%d",sum);
}
