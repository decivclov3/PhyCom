// Lab 05-02 : n to 1 //

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    do{
        printf("%d ", n);
        n -= 1;
    }while (n >= 1);
    
    return 0;
}