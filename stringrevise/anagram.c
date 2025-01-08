#include<stdio.h>
#include<strings.h>
void sortstirn(char str[]){
    int len=strlen(str);
    char temp;
    for(int i=0;i<len-1;i++){
        for(int j=i+1;j<len;j++){
            if(str[i]>str[j]){
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;

            }
        }
    }
}
int anagram(char str1[],char str2[]){
    if(strlen(str1)!=strlen(str2)){
        return 0;
    }
    sortstirn(str1);
    sortstirn(str2);
   if( strcmp(str1,str2)==0){
    return 1;
   }
   else {
    return 0;
   }
}
int main(){
   char str[100],str1[100];
   printf("Enter the  string 1");
   fgets(str,sizeof(str),stdin);
   str[strcspn(str, "\n")] = '\0';
   printf("Enter second string");
   fgets(str1,sizeof(str),stdin);
   str1[strcspn(str1, "\n")] = '\0';  //remove newline character as we have toswap
   if(anagram(str,str1)){
    printf("Both are anagrams");
   }
   else{
    printf("These strings are not anagrams");
   }
}