
#include<stdio.h>
int main()
{
   int i,n;
   printf("input the size of index\n");
   scanf("%d",&n);
   int ar[n];
   int br[n];
   int cr[n];

   printf("input the value of array 01\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&ar[i]);
   }

   printf("input the value of array 02\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&br[i]);
   }

   printf("print the array 01\n");
   for(i=0;i<n;i++)
   {
       printf("%d",ar[i]);
   }
   printf("\nprint the array 02\n");

   for(i=0;i<n;i++)
   {
       printf("%d",br[i]);
   }

   for(i=0;i<n;i++)     // we swap array form this line.
   {
       cr[i]=ar[i];
   }

    for(i=0;i<n;i++)
    {
        ar[i]=br[i];
    }
    for(i=0;i<n;i++)
    {
        br[i]=cr[i];
    }

    printf("\nprint the swaaping array 01\n");
   for(i=0;i<n;i++)
   {
       printf("%d",ar[i]);
   }
   printf("\nprint the swapping array 02\n");

   for(i=0;i<n;i++)
   {
       printf("%d",br[i]);
   }
}
