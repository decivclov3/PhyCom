// [Quiz 2025] Sec 1: Yaris Ativ F1 Racing Case Convert //

#include <stdio.h>
#include <ctype.h>

int main(){
    char c;

    scanf("%c", &c);

    if (isalpha(c)){
        if (isupper(c)){
            printf("%c", tolower(c));
        }else{
            printf("%c", toupper(c));
        }
    }else{
        printf("error");
    }

    return 0;
}