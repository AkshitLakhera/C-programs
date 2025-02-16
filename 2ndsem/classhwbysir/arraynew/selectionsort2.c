#include<stdio.h>
//selection sort- sorting based  on selection
int main(){
    int arr[6]={4,6,2,9,7,3};
    for(int i=0;i<6;i++){
        int min=i;
        for(int j=i+1;j<6;j++){
       if(arr[min] > arr[j]){
        min=j;
       }
        }
        if(min != i){
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
    //print the no
    for(int i=0;i<6;i++){
        printf("%d",arr[i]);
    }
    return 0;
}