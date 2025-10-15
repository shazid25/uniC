
#include<stdio.h>
int main()
{
   int i,n,k;
   printf("input the size of index\n");
   scanf("%d",&n);
   int ar[n];

    printf("input the value of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }



    printf("\ninput the number\n");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(ar[i]==k)
        {
            printf("the position of this %d",i);
        }
    }
return 0;

}


