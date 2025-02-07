#include<stdio.h>
#include<limits.h>
int main(){
    int arr[10]={9,1,2,3,5,5,7,5,1,2};
    for(int i=0;i<10;i++){
         if (arr[i] == INT_MIN) continue; // Skip already marked elements
        for(int j=i+1;j<10;j++){
            if(arr[i]==arr[j]){
                arr[i]=INT_MIN;
                arr[j]=INT_MIN;
            }
        }
    }
    int counter=0;
     for(int i=0;i<10;i++){
        if(arr[i] != INT_MIN){
            counter++;
        }
        if(counter ==2){
             printf("%d\n", arr[i]);
            break;
        }
    }
return 0;
}

