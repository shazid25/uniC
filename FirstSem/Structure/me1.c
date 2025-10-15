
#include<stdio.h>
#include<string.h>

struct first{
char name[100];
int price;
int year;
char color[100];
};

int main()
{

    struct first f;

    strcpy(f.name, "samsung");
    f.price= 10000;
    f.year= 300;
    strcpy(f.color, "Black");

    printf("Name: %s\n",f.name);
    printf("Price: %d\n", f.price);
    printf("Year: %d\n", f.year);
    printf("Color: %s\n", f.color);

    return 0;
}
