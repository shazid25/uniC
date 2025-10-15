#include <stdio.h>

int main()

{
   int b, h;
   int e, f,g;

   float ar,peri;

   scanf("%d",&b);

   scanf("%d",&h);

   scanf("%d",&e);

   scanf("%d", &f);
   scanf("%d", &g);

   ar=.5*(b+h);
   printf("The area is %f \n",ar);

   peri=e+f+g;

   printf("The perimeter is %f",peri);


    return 0;

}