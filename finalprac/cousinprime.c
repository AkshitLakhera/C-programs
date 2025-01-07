#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int isprime(int a){
if(a<=1) return 0; //not prime
for(int i=2;i<sqrt(a);i++){

    if(a%i==0){
        return 0;
    }
}
return 1;// is prime
}
int main(){
    int n;
    printf("Enter the size of array n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %n valus in array",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
//cousine prime
//flag to print answer
int isnotfound=1;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if((isprime(arr[i]) && isprime(arr[j]))  && abs(arr[i]-arr[j])==4){
            printf("the cousine pairs are (%d,%d)",arr[i],arr[j]);
            isnotfound=0;
        }


    }
}
if(isnotfound){
        printf("No  pair found");
    }
return 0;

}