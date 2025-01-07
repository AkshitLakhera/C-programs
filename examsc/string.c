#include<stdio.h>
#include<string.h>
int main() {
    char arr[]={'h','e','l','l','o','\0'};
    int i;
    i=0;
    while(arr[i] !='\0'){
         printf("%c", arr[i]);
        i++;
    }
    printf("%zu",strlen(arr));
    return 0;
}