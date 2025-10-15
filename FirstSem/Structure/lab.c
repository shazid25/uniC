#include<stdio.h>
#include<string.h>

struct Eproduct {
    char name[100];
    int price;
    int year;
    char type;
};

struct Baby {
    char name[100];
    int price;
    int year;
    char type;
};

int main()
{
    struct Eproduct r;
    struct Eproduct s1;

    strcpy(r.name, "samaging s22");
    r.price = 350000;
    r.year = 8023;
    r.type='N';

    strcpy(s1.name, "lphone 13");
    s1.price = 23000;
    s1.year = 2015;
    s1.type='O';

    printf("Name: %s\n", r.name);
    printf("price: %d\n", r.price);
    printf("year: %d\n", r.year);
    printf("type: %c\n", r.type);

    printf("Name: %s\n", s1.name);
    printf("price: %d\n", s1.price);
    printf("year: %d\n", s1.year);
    printf("type: %c\n", s1.type);

    return 0;
}