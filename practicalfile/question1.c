#include <stdio.h>

int main()
{
    float a, b, c, x, result;
    printf("Enter the values of a, b, c, and x:\n");
    scanf("%f %f %f %f", &a, &b, &c, &x);
    result = a * x * x + b * x + c;
    printf("The result of %.2fx^2 + %.2fx + %.2f is: %.2f\n", a, b, c, result);

    return 0;
}
