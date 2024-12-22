#include <stdio.h>
#include <math.h>

int main()
{
    float a, r;
    int n;
    int i;

    printf("Enter the first term (a): ");
    scanf("%f", &a);

    printf("Enter the common ratio (r): ");
    scanf("%f", &r);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    printf("The Geometric Progression is:\n");
    for (i = 0; i < n; i++)
    {
        float term = a * pow(r, i);
        printf("%.2f ", term);
    }
    printf("\n"); // New line at the end

    return 0;
}
