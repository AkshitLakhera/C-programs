#include<stdio.h>
//handle edge case too
int trimorphic(int num){
    int rem;
    int originalnum=num;
    num=num*num*num;
    rem=num%10;
    if(rem == originalnum){
        return 1;
    }
    return 0;
    
}
int main(){
    int n;
    printf("Enter the value");
    scanf("%d",&n);
    int num=trimorphic(n);
    if(num){
        printf("%d is trimorphic",n);
    }
    else{
  printf("%d is  not trimorphic",n);
    }
   
return 0;
}