#include <stdio.h>
#include <math.h>

int main() {
    for (int i = 2; i <= 20; i++) {
        int isprime = 1; // Assume the number is prime initially

        // Check divisors from 2 to sqrt(i)
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isprime = 0; // Not prime
                break; // Exit the loop
            }
        }

        // If the number is prime, print it
        if (isprime) {
            printf("%d ", i);
        }
    }

    return 0;
}
