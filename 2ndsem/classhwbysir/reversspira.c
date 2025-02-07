#include<stdio.h>
int main(){
    int arr[4][4]={
    {1,2,3,4}
    ,{5,6,7,8}
    ,{9,10,11,12}
    ,{13,14,15,16}};
   int top=0,left=0,right=4-1,bottom=4-1;
   while(top<=bottom &&left<=right){
    // Print top row (left to right)
        for (int i = left; i <= right; i++) {        }
        top++; 
        // Print right column (top to bottom)
        for (int i = top; i <= bottom; i++) {
        }
        right--;
        // Print bottom row (right to left) if there are rows left
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
            }
            bottom--;
        }
        // Print left column (bottom to top) if there are columns left
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
            }
            left++;
        }
   }
   //tracked  value
   bottom++;   
   right++;    
   top--;     
   left--;
   printf("%d %d %d %d ",bottom,right,top,left);
   for (int i = left; i <= right; i++) {
        printf("%d ", arr[bottom][i]);
    }
//with this i have print 10 11 then move up t 7 6 5 

}