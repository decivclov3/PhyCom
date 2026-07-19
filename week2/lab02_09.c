#include <stdio.h>
int main(){
    char c1, c2, c3, c4, c5;
    scanf(" %c %c %c %c %c", &c1, &c2, &c3, &c4, &c5);
    c1++, c3++, c5++;
    printf("%c\n%c\n%c\n%c\n%c", c1, c2, c3, c4, c5);
    return 0;
}