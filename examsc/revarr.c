#include<stdio.h>
int main(){
   int arr[4]={1,2,3,4};
   int temp;
   for(int i =0, j=3;i<j;i++,j--){
   temp=arr[i];
   arr[i]=arr[j];
   arr[j]=temp;
   }
for(int i=0;i<4;i++){
    printf("%d",arr[i]);
}
return 0;
}