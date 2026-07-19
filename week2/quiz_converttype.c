#include <stdio.h>
int main(){
    int i;
    float f;
    char c;

    scanf(" %d", &i);
    scanf(" %f", &f);
    scanf(" %c", &c);

    printf("%.3f\n", (float)i);
    printf("%d\n", (int)f);
    printf("%d\n", (int)c);
}