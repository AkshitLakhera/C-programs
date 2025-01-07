// #include<stdio.h>
// int main(){
//     char str[100];
//     printf("Enter string");
//     fgets(str,100,stdin);
//     printf("%s",str); 

// }
#include <stdio.h>
#include <string.h>
int main()
{
    char str[40];
    puts("Enter a  string");
    for(int i =0;i<40;i++){
        scanf("%c",&str[i])
    };
    scanf("%[^\n]", str);
    int size = 0;
    int k = 0;
    while (str[k] != '\0')
    {
        size++;
        k++;
    }
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    // printf("%d", str);
    puts(str);
    return 0;
}