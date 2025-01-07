//differ exactly by 6
// here we have made a separate function to  check if prime or not if not prime then isprime=1,else 0
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int isprime(int a){
if(a<=1) return 0; //not prime
for(int i=2;i<=sqrt(a);i++){
    if(a%i==0){
        return 0; //not  prime
    }
}
return 1; //it means prime
}
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d values as input",n);
    //taking input in array
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //now iterating array to print sexy prime
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((isprime(arr[i]) && isprime(arr[j])) && abs(arr[i] - arr[j]) == 6){
                printf("The sexy prime pair is (%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    return 0;
}  