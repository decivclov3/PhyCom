///Lab 04-06 What type?///

#include <stdio.h>
#include <ctype.h>

int main(){
    char c;
    scanf("%c", &c);

    if (isdigit(c)){
        printf("number");
    } else if (islower(c)){
        printf("lowercase");
    } else if (isupper(c)){
        printf("uppercase");
    } else{
        printf("error");
    }

    return 0;

}