#include <stdio.h>

int main() {
    int a;
    float b;
    char c, d[20];

    scanf("%d\n%f\n%c\n%s", &a, &b, &c, d);
    printf("Integer: %d\n", a);
    printf("Float: %.3f\n", b);
    printf("Character: %c\n", c);
    printf("String: %s\n", d);

    return 0;
}