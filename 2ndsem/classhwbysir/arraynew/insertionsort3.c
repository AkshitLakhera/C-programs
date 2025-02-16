#include<stdio.h>
int main(){
    int arr[6]={34,65,24,9,7,13};
    //let suppose first element is sorted
    // we will start our loop from from second and compare backward
    for(int i=1;i<6;i++){
        int current=arr[i];
        int j=i-1;// one value before i
        while(j>=0 && arr[j]>current){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
      
    }
    for(int i=0;i<6;i++){
        printf(" %d ",arr[i]);
    }
}