#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter the size of array:");
    scanf("%d", &n);

    int ar[n], br[n], cr[n];

    printf("Enter ar[] array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &ar[i]);
    }

      printf("Enter br[] array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &br[i]);
    }



    for(i=0;i<n;i++)
    {

        cr[i]=ar[i];
        ar[i]=br[i];
        br[i]=cr[i];
    }

    printf("\nafter swp ar[] array is:\n");
    for(i=0;i<n;i++)
    {
       printf("%d", ar[i]);
    }


    printf("\nafter swp br[] array is:\n");
    for(i=0;i<n;i++)
    {
       printf("%d", br[i]);
    }

    return 0;
}
