
#include<stdio.h>
int main()
{
   int i,n;
   printf("input the size of index\n");
   scanf("%d",&n);
   int ar[n];
   int br[n];

   printf("input the value of array ar\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&ar[i]);
   }
   for(i=0;i<n;i++)
   {
       br[i]=ar[i];
   }
   printf("the array br\n");
   for(i=0;i<n;i++)
   {
       printf("%d\n",br[i]);
   }
return 0;
}
