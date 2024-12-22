// q-1(1*2) + (3*4) + (5*6) + .....n terms
// #include <stdio.h>
// int main()
// {
//     int i, n, sum, multiply;
//     sum = 0;
//     for (i = 1; i <= n * 2; i = i + 2)
//     {
//         multiply = (i) * (i + 1);
//         sum = multiply + sum;
//     }
//     return 0;
// }

// q2 - (1+2)*(3+4)*(5+6).... n terms
// int main()
// {
//     int i, n, sum, product;
//     product = 1;
//     for (i = 1; i <= n * 2; i += 2)
//     {
//         sum = (i) + (i + 1);
//         product = product * sum;
//     }
//     return 0;
// }

// q3) - (2*4*6) + (8*10*12) + (14*16*18).... n terms.
// #include <stdio.h>

// int main()
// {
//     int i, n, sum;
//     sum = 0;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     for (i = 2; i <= n * 6; i += 6)
//     {
//         sum += i * (i + 2) * (i + 4);
//     }
//     printf("The sum is: %d\n", sum);

//     return 0;
// }

#include <stdio.h>

int main()
{
    int i, mul, n, t, sum;
    mul = 1;
    sum = 0;
    t = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 5; i <= n; i = i * 2)
    {
        mul = i * mul;
        t++;
        if (t == 3)
        {
            sum += mul;
            mul = 1;
            t = 0;
        }
    }

    printf("The sum is: %d\n", sum);

    return 0;
}
// #include <stdio.h>

// int main()
// {
//     int i, n, sum, mul;
//     sum = 0;
//     printf("Enter the number of groups: ");
//     scanf("%d", &n);
//     i = 5;
//     for (int group = 1; group <= n; group++)
//     {
//         mul = i * (i * 2) * (i * 4);
//         sum += mul;
//         i *= 8;
//     }
//     printf("The sum is: %d\n", sum);
//     return 0;
// }

// 1+2-3-4+5+6-7-8+9+10....n terms
// in every fours terms we have two positive and two negative it means
#include <stdio.h>
int main()
{
    int S1, S2, i, n, Sum;
    S1 = 0;
    S2 = 0;
    printf("Enter value  of n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 4 == 1 || i % 4 == 2)
        {
            S1 = S1 + i;
        }
        else
        {
            S2 = S2 + i;
        }
    }
    Sum = S1 - S2;
    return 0;
}
