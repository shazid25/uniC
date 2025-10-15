#include<stdio.h>
int main()
{
    int phy,che,math;
    printf("the number phy che and math ");
    scanf("%d%d%d",&phy,&che,&math);

    if(phy>=55 && che>=50  && math>=65)
    {
        if(phy+che+math>=190)
        {
            printf("eligible");
        }
        else if(phy+math>=140)
        {
            printf("eligible");
        }
    }
    else
    {
        printf("not eligible");
    }

}
