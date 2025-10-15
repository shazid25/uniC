/*User will give you the numbers he get in final exam.
  you need to point this grade
        [80-100]= A+
        [70-79]= A
        [60-69]= A-
        [50-59]= B
        [40-49]= C
        [40< ]=  F */

#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    if(x>=80 && x<=100)
    {
        printf("A+");
    }
    else if(x>=70 && x<=79)
    {
        printf("A");
    }
     else if(x>=60 && x<=69)
    {
        printf("A-");
    }
     else if(x>=50 && x<=59)
    {
        printf("B");
    }
     else if(x>=40 && x<=49)
    {
        printf("C");
    }
    else
    {
        printf("F");
    }
}

