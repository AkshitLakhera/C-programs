#include<stdio.h>
#include<string.h>
void reversestring(char str[]){
    int start=0;
    int end=strlen(str) -1;
    char temp;
    while(start <end){
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }

}
int main(){
    char sentence[100];
    printf("Enter the sentence");
    fgets(sentence,sizeof(sentence),stdin);
    sentence[strcspn(sentence,"\n")]='\0';
    reversestring(sentence);
    printf("THE REVERSED STRING IS %s",sentence);
    return 0;
}
//both array and string are passed by reference