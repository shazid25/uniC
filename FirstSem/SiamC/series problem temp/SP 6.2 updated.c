#include<stdio.h>
#include<math.h>

int main()
{
    int i, j, k, l, n;
    float m, jog = 0;
    printf("input the value of n: ");
    scanf("%d", &n);

    j = 2;  // Power
    k = 2;  // Denominator factorial

    for(i = 1; i <= n; i += 2)
    {
        int sum = 1;

        for(l = k; l >= 1; l--)
        {
            sum = sum * l;
        }

        printf("%d^%d/%d + ", i, j, sum);

        m = pow(i, j);               // i^j
        jog = jog + (m / (float)sum); // ✅ This line is fixed: cast sum to float

        j += 2;
        k += 2;
    }

    printf("\nThe sum of this series: %.8f\n", jog); // 8 digits after decimal
    return 0;
}
