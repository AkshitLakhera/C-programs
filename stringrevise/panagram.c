#include<stdio.h>
#include<ctype.h>
int panagram(char str[]){
    int alphabet[26]={0};
    int count=0;
    int index;
    for(int i=0;str[i] !='\0';i++){
    char ch = tolower(str[i]);
      if(ch>='a' && ch<='z'){
      index=ch -'a';
      if(alphabet[index] == 0){
                alphabet[index] = 1;  // Mark the letter as found
                count++;  // Increase the count of found letters
      }
      }
    }
    if(count == 26){
        printf("yes it is panagram");
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    char str[100];
    printf("Enter the value of string");
    fgets(str,sizeof(str),stdin);
    if(panagram(str)){
        printf("yes it is panagram");
    }else {
        printf("The sentence is not a pangram.\n");
    }

    return 0;


}