#include <stdio.h>

int main() {
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int top = 0, bottom = 3, left = 0, right = 3;
    int firstswap = arr[top+1][left];

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            int temp = arr[top][i];
            arr[top][i] = firstswap;
            firstswap = temp;
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            int temp = arr[i][right];
            arr[i][right] = firstswap;
            firstswap = temp;
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                int temp = arr[bottom][i];
                arr[bottom][i] = firstswap;
                firstswap = temp;
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                int temp = arr[i][left];
                arr[i][left] = firstswap;
                firstswap = temp;
            }
            left++;
        }
    }

    // Print the matrix after swapping
    printf("After swapping:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}





//in first swap temp is stored 
//now we move downward
//     top=top+1;
//     for(int k=0;k<4;k++){
//         int temp=arr[i][right];
//         firstswap=temp;
//         printf("%d",arr[][right]);

//     }
// }
// }




// int top=0,bottom=3,left=0,right=3;
// for(int i=0;i<1;i++){
//     int firstswap=arr[1][0];
//     for(int j=0;j<4;j++){
//      int temp=arr[i][j]; // 1 is stored here
//      arr[i][j]=firstswap;   // 5 comes here  in first postion 
//      firstswap=temp;
//      printf("%d",arr[i][j]);
//     }