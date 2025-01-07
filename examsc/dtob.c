#include<stdio.h>
int main(){
    int n,rem,binary,tenth;
    printf("enter n");
    scanf("%d",&n);
    tenth=1;
    binary=0;
    while(n>0){
        rem=n%2;
        binary = binary + rem * tenth;
        tenth=tenth*10;
        n=n/2;
    }
    printf("the value is %d",binary);
    return 0;

}
// #include <stdio.h>

// int main() {
//     int n, rem, binary = 0, tenth = 1;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     // Convert decimal number to binary
//     while (n > 0) {
//         rem = n % 2;                // Get the remainder when dividing by 2 (0 or 1)
//         binary = binary + rem * tenth;   // Add remainder at the correct place value
//         tenth = tenth * 10;            // Shift place value (1, 10, 100, etc.)
//         n = n / 2;                     // Divide the number by 2 for the next iteration
//     }

//     printf("The binary value is: %d\n", binary);
//     return 0;
// }
