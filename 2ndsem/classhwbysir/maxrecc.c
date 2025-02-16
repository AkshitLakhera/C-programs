#include<stdio.h>
int maxelement(int arr[],int max,int size,int k){
    if(k ==size){
        return max;
    }
    if(max < arr[k]){
     max =arr[k];
    }
    k++;
   return maxelement(arr,max,size,k);

}
int main(){
int arr[5]={3,6,2,5,9};
int max=arr[0];
int k=0;
int answer=maxelement(arr,max,5,k+1);
printf("%d",answer);

}