#include<stdio.h>
#include<limits.h>
int main() {
    int n;
    int arr[5]={2,3,5,6,7};
    printf("Enter the n in between");
    scanf("%d",&n);
    int justmin=INT_MIN;//very small number
    int justmax=INT_MAX;//very large number
     int justminindex=0;
     int justmaxindex=0;
    for(int i=0;i<5;i++){
        //for just max
        if(arr[i]<justmax && arr[i]>n){
            justmax=arr[i];
            justmaxindex=i;
        }
        //for just min
        if(arr[i]>justmin && arr[i]<n){
            justmin=arr[i];
            justminindex=i;
        }
    }
printf("The just min  is %d \n",justmin);
printf("The justmax is %d \n",justmax);
//idices
printf("The justmax index is %d \n",justmaxindex);
printf("The justmin  index is %d \n",justminindex);
return 0;
}