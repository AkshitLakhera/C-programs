#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    int startword=1;
    for (int i = 0; str[i] != '\0'; i++) {
        if((startword) && (str[i]>'a'&&str[i]<'z')){
            str[i]=toupper(str[i]);
            startword=0;
        }
        if(str[i]==' '){
            startword=1;
        }

    }

    printf("Capitalized string: %s\n", str);
    return 0;
}
