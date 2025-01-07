#include <stdio.h>

int main() {
    int m, n;
    printf("The range starts from m, enter m: ");
    scanf("%d", &m);
    printf("The range ends at n, enter n: ");
    scanf("%d", &n);

    int rem, rev, notfound = 1;

    for (int i = m; i <= n; i++) {
        int temp = i; // Use a temp variable to store the current number
        rev = 0;      // Reset reverse for each number

        // Calculate the reverse of the number
        while (temp > 0) {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp = temp / 10;
        }

        // Check if the number is a palindrome and divisible by 7
        if (rev == i && i % 7 == 0) {
            printf("The number is %d\n", i);
            notfound = 0;
            break; // Exit loop after finding the first palindromic number divisible by 7
        }
    }

    if (notfound) {
        printf("No palindromic number divisible by 7 found in the given range.\n");
    }

    return 0;
}
