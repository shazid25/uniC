#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    int i;

    gets(a);
    gets(b);

    int la = strlen(a);
    int lb = strlen(b);

    if (la != lb)
        {
        printf("Not matched\n");
    }
    else {
        if (strcmp(a, b) == 0)
            {
            printf("matched\n");
        }
    else {
            printf("not matched\n");
        }
    }

    return 0;
}
