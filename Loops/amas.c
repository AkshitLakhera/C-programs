#include <stdio.h>
#include <math.h>

int main() {
    int rem, sum, countn, count = 0, m, n, originalno;
    
    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = m; i <= n; i++) {
        originalno = i;
        int p = i;  // Temporary variable to calculate the number of digits
        countn = 0; // Reset countn for each number
        
        // Count the number of digits in the number
        while (p > 0) {
            p = p / 10;
            countn++;
        }
        
        sum = 0; // Reset sum for each number
        int temp = i; // Temporary variable for calculations
        
        // Calculate the sum of digits raised to the power of countn
        while (temp > 0) {
            rem = temp % 10;
            sum += pow(rem, countn); // Add power of digit to sum
            temp = temp / 10;
        }
        
        // Check if the number is an Armstrong number
        if (originalno == sum) {
            count++; // Increment count if it's an Armstrong number
        }
    }
    
    printf("The count of Armstrong numbers is %d\n", count);
    return 0;
}
