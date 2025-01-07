#include<stdio.h>
int main() {
    int n, count = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    // Check for trailing zeros
    while (n > 0 && n % 10 == 0) {
        count++;
        n = n / 10;  // Remove the last digit
    }

    printf("The count of trailing zeros is: %d\n", count);
    return 0;
}
