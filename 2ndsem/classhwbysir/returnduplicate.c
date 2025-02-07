#include<stdio.h>
int main(){
    int arr[16]={1,2,3,4,1,2,4,5,6,2,6,7,8,8,9,9};
    int dup[16];
    int k=0;
    for(int i=0;i<16;i++){
        for(int j=i+1;j<16;j++){
            if(arr[i]==arr[j]){
                //already exists
                int alreadyexists=0;
                for(int m =0;m<k;m++){
                    if(arr[m]==arr[i]){
                        alreadyexists=1;
                    }
                }
                if(!alreadyexists){
                dup[k]=arr[i];
                k++;    

                }
            }
        }
    }
//for loop to print
for(int i=0;i<k;i++){
    printf("%d",dup[i]);
}
return 0;
}