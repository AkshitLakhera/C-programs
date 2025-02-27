#include<stdio.h>
int main(){
    int arr[5]={1,2,3,7,5};
    int subarr[2];
    int k=0;
    int key=12;
    for(int i=0;i<5;i++){
        int sum=0;
        int j=0;
        subarr[k]=i+1; 
        while(sum < key){
            j++;
            sum=arr[j]+sum;
            if(sum==key){
                subarr[k++]=j+1;
                break;
            }

        }
           j=0;
            sum=0;
            k=0;
        
        
    }
    for(int i=0;i<k;i++){
        printf("%d",subarr[i]);
    }
    return 0;
}
