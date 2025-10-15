#include<stdio.h>
int main()
{
    int roll,name,phy,che,ca,total;
    float per;
    printf("the roll of the student");
    scanf("%d",&roll);

    printf("number of the student");
    scanf("%d%d%d",&phy,&che,&ca);

    total=phy+che+ca;
    printf("%d\n",total);
    per=total/3.0;
    printf("%f\n", per);

    if(per>=60 && per<=100)
    {
        printf("First Division");
    }
    else if(per>=40 && per<=59)
    {
        printf("Second Division");
    }
    else
    {
        printf("Fail");
    }
}

