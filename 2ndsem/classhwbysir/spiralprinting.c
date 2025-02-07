#include<stdio.h>
int main(){
    int arr[4][4]={
    {1,2,3,4}
    ,{5,6,7,8}
    ,{9,10,11,12}
    ,{13,14,15,16}};

int top=0,bottom=3,left=0,right=3;
//print first row
for(int i=0;i<4;i++){
    printf("%d",arr[top][i]);
}
top=top+1;
//print col
for(int i=1;i<4;i++){
    printf("%d",arr[i][right]);
}
right=right-1;
for(int i=right;i>=0;i--){
    printf("%d",arr[bottom][i]);
}
bottom=bottom-1;
//from bottom to top
for(int i=bottom;i>=top;i--){
    printf("%d",arr[i][0]);
}
left=left+1;

for(int i=left;i<=right;i++ ){
    printf("%d",arr[left][i]);
}
top=top+1;
//right col top to bottom
for(int i=top;i<bottom;i++){
    printf("%d",arr[i][right]);
}
right=right-1;
for(int i=top;i<=bottom;i++){
    printf("%d",arr[top][i]);
}
right=right-1;
for(int i=right;i>=right;i--){
printf("%d",arr[right][i]);
}
return 0;
}




/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
// int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
//     printf("%d",matrixSize);// row size
//     int top=0,left=0,right=*matrixColSize-1,bottom=matrixSize-1;
//     int k=0;
//     int *arr=(int *) malloc(matrixSize * (*matrixColSize) * sizeof(int));
//    while(top<=bottom &&left<=right){
//     // Print top row (left to right)
//         for (int i = left; i <= right; i++) {  
//             arr[k++]=matrix[top][i];
//               }
//         top++; 
//         // Print right column (top to bottom)
//         for (int i = top; i <= bottom; i++) {
//              arr[k++]=matrix[i][right];
//         }
//         right--;
//         // Print bottom row (right to left) if there are rows left
//         if (top <= bottom) {
//             for (int i = right; i >= left; i--) {
//                  arr[k++]=matrix[bottom][i];
//             }
//             bottom--;
//         }
//         // Print left column (bottom to top) if there are columns left
//         if (left <= right) {
//             for (int i = bottom; i >= top; i--) {
//                  arr[k++]=matrix[i][left];
//             }
//             left++;
//         }
//    }
//   *returnSize = k;
//    return arr;
    
// }