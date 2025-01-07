#include<stdio.h>
int main(){
    int arr[3][3] = {
        {4, 9, 2},
        {3, 5, 7},
        {8, 1, 6}
    };
    int mainSum = 0;

    // Calculate sum of the first row (mainSum)
    for (int j = 0; j < 3; j++) {
        mainSum += arr[0][j];
    }

    // Initialize sums for diagonals
    int sumd = 0, sumd2 = 0;

    // Check rows, columns, and diagonals
    for (int k = 0; k < 3; k++) {
        int sumr = 0, sumcol = 0;
        for (int l = 0; l < 3; l++) {
            // Row and column sums
            sumr += arr[k][l];
            sumcol += arr[l][k];

            // Diagonal 1 (top-left to bottom-right)
            if (k == l) {
                sumd += arr[k][l];
            }

            // Diagonal 2 (top-right to bottom-left)
            if (k + l == 2) {
                sumd2 += arr[k][l];
            }
        }

        // Check if current row or column does not match mainSum
        if (sumr != mainSum || sumcol != mainSum) {
            printf("Not a magic square\n");
            return 0;
        }
    }

    // Check diagonals
    if (sumd != mainSum || sumd2 != mainSum) {
        printf("Not a magic square\n");
        return 0;
    }

    // If all checks pass
    printf("It is a magic square\n");
    return 0;
}
