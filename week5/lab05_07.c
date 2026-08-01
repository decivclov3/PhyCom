// Lab 05-07 : Sum 9 //

#include <stdio.h>

int main(){
    int n, result = 0;
    scanf("%d", &n);

    while (n != -9)
    {
        result += n;
        scanf("%d", &n);
    }

    printf("%d", result);

    return 0; 
}