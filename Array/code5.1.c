// Input an arry ar[], print all the odd values 
// from the index


#include<stdio.h>
int main()
{
    int n, i;
    
    scanf("%d", &n);
    int ar[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }
    
    for(i=0; i<n; i++)
   {
    if(ar[i] % 2 == 1)
     {
    printf("%d", i);
    }
   }

    return 0;
}