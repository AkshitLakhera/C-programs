#include<stdio.h>
//not bubble sort
int main(){
    int arr[6]={4,6,2,9,7,3}; // i want it ={ 2,3,4,6,7}
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
       if(arr[i] > arr[j]){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
       }
        }
    }
    for(int i=0;i<6;i++){
        printf("%d",arr[i]);
    }
    return 0;
}