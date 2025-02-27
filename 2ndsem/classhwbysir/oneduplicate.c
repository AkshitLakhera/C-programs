#include<stdio.h>
int main(){
int arr[5]={4,2,2,1,3};
//sort the array first
  for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
       if(arr[i] > arr[j]){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
       }
        }
    }
    int duplicate;
    int duplicatesum;
    int totoalsum;
    int missingno;
    //sorted array = {1,2,2,3,4};
    for(int i=0;i<5;i++){
        if(arr[i]==arr[i+1]){
       duplicate=arr[i];
       break;
        }
    }
    //sum
      for(int i=0;i<5;i++){
        duplicatesum=duplicatesum+ arr[i];
        totoalsum=totoalsum+(i+1);
        }
     duplicatesum=duplicatesum-duplicate;
     missingno=totoalsum-duplicatesum;
     printf("the missing no is  %d and duplicate is %d \n",missingno,duplicate);
     return 0;
    }

